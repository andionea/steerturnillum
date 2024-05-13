/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Adc_PBcfg.c
 *    \author     Andrei-Cristian Onea
 *    \brief      Sets up the AUTOSAR ADC driver configuration using the Init data types for masked 32 bits
 *                registers.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Generic/Adc.h"
#include "Adc_Cfg.h"
#include "stm32f407xx.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Definition Of Local Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Defines the total number of registers to be loaded in the initialization function. */
#define ADC_NUMBER_OF_INIT_REGISTERS      (8U)

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Definition Of Local Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Variables                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Variables                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Stores the configuration of all the registers to be set in the ADC initialization function. */
static const Init_Masked32BitsSingleType Adc_kat_Registers[ADC_NUMBER_OF_INIT_REGISTERS] =
    {
        /* Set the resolution of the conversion to 12 bits. */
        {
            (volatile uint32*) (&ADC1->CR1),

            (uint32) ~(ADC_CR1_RES),

            (uint32) (0UL)
        },

        /* Set the alignment of the conversion to right. */
        /* Enable ADC1 hardware unit (ADON). */
        {
            (volatile uint32*) (&ADC1->CR2),

            (uint32) ~(
            ADC_CR2_ALIGN |
            ADC_CR2_ADON),

            (uint32) (0UL | 
            ADC_CR2_ADON)
        },

        /* Set the channel sequence length to 1 conversion. */
        {
            (volatile uint32*) (&ADC1->SQR1),

            (uint32) ~(ADC_SQR1_L),

            (uint32) (0UL)
        },

        /* Set the channel 0 sampling time to 84 cycles. */
        {
            (volatile uint32*) (&ADC1->SMPR2),

            (uint32) ~(ADC_SMPR2_SMP0),

            (uint32) (ADC_SMPR2_SMP0_2)
        },

        /* Set the resolution of the conversion to 12 bits. */
        {
            (volatile uint32*) (&ADC3->CR1),

            (uint32) ~(ADC_CR1_RES),

            (uint32) (0UL)
        },

        /* Set the alignment of the conversion to right. */
        /* Enable ADC3 hardware unit (ADON). */
        {
            (volatile uint32*) (&ADC3->CR2),

            (uint32) ~(
            ADC_CR2_ALIGN |
            ADC_CR2_ADON),

            (uint32) (0UL | 
            ADC_CR2_ADON)
        },

        /* Set the channel sequence length to 1 conversion. */
        {
            (volatile uint32*) (&ADC3->SQR1),

            (uint32) ~(ADC_SQR1_L),

            (uint32) (0UL)
        },

        /* Set the channel 0 sampling time to 84 cycles. */
        {
            (volatile uint32*) (&ADC3->SMPR2),

            (uint32) ~(ADC_SMPR2_SMP0),

            (uint32) (ADC_SMPR2_SMP0_2)
        }
    };

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     References the configuration of all the registers to be set in the ADC initialization function and the
 *             number of registers to be initialized. */
const Adc_ConfigType Adc_gkt_Config =
    {
        Adc_kat_Registers,
        ADC_NUMBER_OF_INIT_REGISTERS
    };

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Functions                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Local Functions                                         */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Global Functions                                        */
/*-------------------------------------------------------------------------------------------------------------------*/

