/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       AdcIf.h
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Redefines all ADC driver's interfaces and data types, which is sufficient for this ADC Interface
 *                option, since it uses only internal ADC driver groups.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef ADCIF_H
#define ADCIF_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Adc.h"
#include "AdcIf_Cfg.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Starts the conversion of the specified ADC group. */
#define AdcIf_StartGroupConversion(Group)                   \
   Adc_StartGroupConversion((Adc_GroupType) (Group))

/** \brief     Returns the conversion status of the specified ADC group. */
#define AdcIf_GetGroupStatus(Group)                         \
   (AdcIf_StatusType) Adc_GetGroupStatus((Adc_GroupType) (Group))

/** \brief     Reads the last conversion result of the specified ADC group. */
#define AdcIf_ReadGroup(Group, DataBufferPtr)               \
   Adc_ReadGroup((Adc_GroupType) (Group), (Adc_ValueGroupType*) (DataBufferPtr))

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Holds the numeric IDs of all ADC groups. */
typedef Adc_GroupType AdcIf_GroupType;

/** \brief     Defines the width of one ADC group channel conversion result. */
typedef Adc_ValueGroupType AdcIf_ValueGroupType;

/** \brief     Defines the current conversion status of an ADC channel group. */
typedef enum
{
   /** \brief     The conversion of the specified group has not been started. No result is available. */
   ADCIF_IDLE,

   /** \brief     The conversion of the specified group has been started and is still going on. */
   ADCIF_BUSY,

   /** \brief     A conversion round (which is not the final one) of the specified group has been finished. */
   ADCIF_COMPLETED,

   /** \brief     The result buffer is completely filled for each channel of the selected group. */
   ADCIF_STREAM_COMPLETED
} AdcIf_StatusType;

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Variables                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Constants                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Functions                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
#endif /* ADCIF_H */
