/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Init.h
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Exports the global functions and data types of the generic API for writing sets of 8, 16 or 32 bit
 *                variables.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef INIT_H
#define INIT_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Std_Types.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------- Full ------------------------------------------------------*/

/** \brief     Defines a configuration for a single 8-bits variable. */
typedef struct
{
   /** \brief     Address of the 8-bits variable. */
   volatile uint8* puc_Variable;

   /** \brief     Value to be loaded into the destination 8-bits variable. */
   uint8 uc_LoadValue;

} Init_Full8BitsSingleType;

/** \brief     Defines a configuration for multiple 8-bits variable full configurations. */
typedef struct
{
   /** \brief     Pointer to a table of single 8-bits full configurations. */
   const Init_Full8BitsSingleType* kpt_ConfigTable;

   /** \brief     The number of 8-bit full configurations. */
   uint16 us_NrOfConfigs;

} Init_Full8BitsConfigType;

/*---------------------------------------------------------*/

/** \brief     Defines a configuration for a single 16-bits variable. */
typedef struct
{
   /** \brief     Address of the 16-bits variable. */
   volatile uint16* pus_Variable;

   /** \brief     Value to be loaded into the destination 16-bits variable. */
   uint16 us_LoadValue;

} Init_Full16BitsSingleType;

/** \brief     Defines a configuration for multiple 16-bits variable full configurations. */
typedef struct
{
   /** \brief     Pointer to a table of single 16-bits variable full configurations. */
   const Init_Full16BitsSingleType* kpt_ConfigTable;

   /** \brief     The number of 16-bit full configurations. */
   uint16 us_NrOfConfigs;

} Init_Full16BitsConfigType;

/*---------------------------------------------------------*/

/** \brief     Defines a configuration for a single 32-bits variable. */
typedef struct
{
   /** \brief     Address of the 32-bits variable. */
   volatile uint32* pul_Variable;

   /** \brief     Value to be loaded into the destination 32-bits variable. */
   uint32 ul_LoadValue;

} Init_Full32BitsSingleType;

/** \brief     Defines a configuration for multiple 32-bits variable full configurations. */
typedef struct
{
   /** \brief     Pointer to a table of single 32-bits variable full configurations. */
   const Init_Full32BitsSingleType* kpt_ConfigTable;

   /** \brief     The number of 32-bit full configurations. */
   uint16 us_NrOfConfigs;

} Init_Full32BitsConfigType;

/*------------------------------------------------------ Masked -----------------------------------------------------*/

/** \brief     Defines a configuration for a single 8-bits variable with masks. */
typedef struct
{
   /** \brief     Address of the 8-bits variable. */
   volatile uint8* puc_Variable;

   /** \brief     AND mask to be applied on the destination 8-bits variable. */
   uint8 uc_MaskAnd;

   /** \brief     OR mask to be applied on the destination 8-bits variable. */
   uint8 uc_MaskOr;

} Init_Masked8BitsSingleType;

/** \brief     Defines a configuration for multiple 8-bits variable masked configurations. */
typedef struct
{
   /** \brief     Pointer to a table of single 8-bits variable masked configurations. */
   const Init_Masked8BitsSingleType* kpt_ConfigTable;

   /** \brief     The number of 8-bits masked configurations. */
   uint16 us_NrOfConfigs;

} Init_Masked8BitsConfigType;

/*---------------------------------------------------------*/

/** \brief     Defines a configuration for a single 16-bits variable with masks. */
typedef struct
{
   /** \brief     Address of the 16-bits variable. */
   volatile uint16* pus_Variable;

   /** \brief     AND mask to be applied on the destination 16-bits variable. */
   uint16 us_MaskAnd;

   /** \brief     OR mask to be applied on the destination 16-bits variable. */
   uint16 us_MaskOr;

} Init_Masked16BitsSingleType;

/** \brief     Defines a configuration for multiple 16-bits variable masked configurations. */
typedef struct
{
   /** \brief     Pointer to a table of single 16-bits variable masked configurations. */
   const Init_Masked16BitsSingleType* kpt_ConfigTable;

   /** \brief     The number of 16-bits masked configurations. */
   uint16 us_NrOfConfigs;

} Init_Masked16BitsConfigType;

/*---------------------------------------------------------*/

/** \brief     Defines a configuration for a single 32-bits variable with masks. */
typedef struct
{
   /** \brief     Address of the 32-bits variable. */
   volatile uint32* pul_Variable;

   /** \brief     AND mask to be applied on the destination 32-bits variable. */
   uint32 ul_MaskAnd;

   /** \brief     OR mask to be applied on the destination 32-bits variable. */
   uint32 ul_MaskOr;

} Init_Masked32BitsSingleType;

/** \brief     Defines a configuration for multiple 32-bits variable masked configurations. */
typedef struct
{
   /** \brief     Pointer to a table of single 32-bits variable masked configurations. */
   const Init_Masked32BitsSingleType* kpt_ConfigTable;

   /** \brief     The number of 32-bits masked configurations. */
   uint16 us_NrOfConfigs;

} Init_Masked32BitsConfigType;

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Variables                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Constants                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Functions                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

extern void Init_gv_Full8Bits(const Init_Full8BitsConfigType* kpt_Full8BitsConfig);
extern void Init_gv_Full16Bits(const Init_Full16BitsConfigType* kpt_Full16BitsConfig);
extern void Init_gv_Full32Bits(const Init_Full32BitsConfigType* kpt_Full32BitsConfig);
extern void Init_gv_Masked8Bits(const Init_Masked8BitsConfigType* kpt_Masked8BitsConfig);
extern void Init_gv_Masked16Bits(const Init_Masked16BitsConfigType* kpt_Masked16BitsConfig);
extern void Init_gv_Masked32Bits(const Init_Masked32BitsConfigType* kpt_Masked32BitsConfig);

/*-------------------------------------------------------------------------------------------------------------------*/
#endif /* INIT_H */
