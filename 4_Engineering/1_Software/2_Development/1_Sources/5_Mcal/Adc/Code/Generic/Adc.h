/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Adc.h
 *    \author     Andrei-Cristian Onea
 *    \brief      Defines the public interface of the Adc module.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef ADC_H
#define ADC_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Init.h"
#include "stm32f407xx.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Defines the global ID type of an ADC channel. */
typedef unsigned int Adc_GroupType;

/** \brief     Defines the global type for reading the converted values of a ADC channel group. */
typedef unsigned int Adc_ValueGroupType;

/** \brief     Defines the global ADC configuration type as the Init masked 32 bit registers load type. */
typedef Init_Masked32BitsConfigType Adc_ConfigType;

/** \brief     Defines the global ADC configuration type for the current status of the conversion. */
typedef enum
{
    ADC_IDLE, /* The conversion of the specified group has not been started.*/
    ADC_BUSY, /* The conversion of the specified group has been started and is still going on.*/
    ADC_COMPLETED, /* A conversion round (which is not the final one) of the specified group has been finished.*/
    ADC_STREAM_COMPLETED /* The result buffer is completely filled.*/
} Adc_StatusType;

typedef struct
{
    /** \brief Address of the ADC*/
    ADC_TypeDef* ADCx;

    /** \brief Channel ID*/
    Adc_GroupType channelID;
} Adc_ChannelConfigType;

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Variables                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Constants                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

extern const Adc_ConfigType Adc_gkt_Config;

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Functions                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

extern void Adc_Init(const Adc_ConfigType* ConfigPtr);
extern void Adc_StartGroupConversion(Adc_GroupType Group);
extern Adc_StatusType Adc_GetGroupStatus(Adc_GroupType Group);
extern Std_ReturnType Adc_ReadGroup(Adc_GroupType Group, Adc_ValueGroupType *DataBufferPtr);

/*-------------------------------------------------------------------------------------------------------------------*/
#endif /* ADC_H */
