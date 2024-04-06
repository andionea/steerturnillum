/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Linker.ld
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Defines all the used memories in the system along with all the memory sections and exports symbols 
 *                to the application.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/* Define all types of memories by specifying the start address and length. */
MEMORY
{
   RAM (xrw)            : ORIGIN = 0x20000000,  LENGTH = 128K
   CCMRAM (xrw)         : ORIGIN = 0x10000000,  LENGTH = 64K
   FLASH (rx)           : ORIGIN = 0x08000000,  LENGTH = 1024K
}

/* Configure the symbol that defines the size of the stack. */
_Linker_StackSize_ = 4K;

/* Set the stack head (stack frame) address symbol at the end of the CCM RAM (the stack grows descending). */
_Linker_StackHead_ = ORIGIN(CCMRAM) + LENGTH(CCMRAM);

/* Set the stack tail address symbol relative to the stack head and configured size. */
_Linker_StackTail_ = _Linker_StackHead_ - _Linker_StackSize_;

/* Setup the interrupt vector as extern to force linking when it is included in a library. */
EXTERN(Os_kapf_InterruptVector) 
   
/* Setup the format of the memory sections. */
SECTIONS
{
   /* Setup the interrupt vector section in the flash memory. It is mandatory for this section to be the first one 
      since it is the default space (start of flash) where the interrupt vector is stored (address 0x00000000, 
      equivalent to 0x08000000 because of the memory mapping). */
   .isr_vector :
   {
      FILL(0xFF)
      . = ALIGN(4);
      KEEP(*(.isr_vector))
      *(.after_vectors .after_vectors.*)
      . = ALIGN(4);
   } >FLASH
   
   /* Setup the program code section in the flash memory. */
   .text :
   {
      . = ALIGN(4);
      *(.text)
      *(.text*)
      *(.glue_7)     /* Glue arm to thumb code. */
      *(.glue_7t)    /* Glue thumb to arm code. */
      . = ALIGN(4);
   } >FLASH
   
   /* Setup the constant data section in the flash memory. */
   .rodata :
   {
      . = ALIGN(4);
      *(.rodata)
      *(.rodata*)
      . = ALIGN(4);
   } >FLASH
   
   /* Setup the flash address where the initialization data for the global variables is stored. */
   _Linker_DataLoad_ = LOADADDR(.data);
   /* Setup the data section of initialized global variables in RAM. This section is initialized from flash (starting from _Linker_DataLoad_) 
      in the startup script.*/
   .data : 
   {
      . = ALIGN(4);
      /* Setup the RAM start address where the global initialized variables are placed. */
      _Linker_DataStart_ = .;
      *(.data)
      *(.data*)
      . = ALIGN(4);
      /* Setup the RAM end address where the global initialized variables are placed. */
      _Linker_DataEnd_ = .;
   } >RAM AT> FLASH
   
   /* Setup the data section of uninitialized global variables in RAM. This section is initialized to 0 by the startup script. */
   .bss :
   {
      . = ALIGN(4);
      /* Setup the RAM start address where the global uninitialized variables are placed. */
      _Linker_BssStart_ = .;
      *(.bss)
      *(.bss*)
      *(COMMON)
      . = ALIGN(4);
      /* Setup the RAM end address where the global uninitialized variables are placed. */
      _Linker_BssEnd_ = .;
   } >RAM
   
   /* Setup the stack section starting from the already defined stack tail symbol. */
   .stack _Linker_StackTail_ :
   {
      /* Reserve space equal to the already defined stack size symbol. */
      . = . + _Linker_StackSize_;
      . = ALIGN(4);
   } >CCMRAM
}
