/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Adc.c
 *    \author     Andrei-Cristian Onea
 *    \brief      Implements the public interface of the Adc module.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Adc.h"
#include "Adc_Cfg.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Definition Of Local Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

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

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Functions                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Local Functions                                         */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Global Functions                                        */
/*-------------------------------------------------------------------------------------------------------------------*/

/**
 * \brief      Initializes the ADC hardware units and driver.
 * \param      ConfigPtr : Pointer to ADC configuration set.
 * \return     -
 */
void Adc_Init(const Adc_ConfigType *ConfigPtr)
{
    Init_gv_Masked32Bits(Adc_gkt_Config.AdcConfig);
}

/**
 * \brief      Starts the conversion of all channels of the requested ADC Channel group.
 * \param      Group : Numeric ID of requested ADC Channel group.
 * \return     -
 */
void Adc_StartGroupConversion(Adc_GroupType Group)
{   
    Adc_gkt_Config.ChannelConfig[Group].ADCx->CR2 |= ADC_CR2_SWSTART; 
}

/**
 * \brief      Return the conversion status of the requested ADC Channel group.
 * \param      Group : Numeric ID of requested ADC Channel group.
 * \return     Conversion status of the requested ADC Channel group.
 */
Adc_StatusType Adc_GetGroupStatus(Adc_GroupType Group)
{
    Adc_StatusType Status = ADC_IDLE;

    if (Adc_gkt_Config.ChannelConfig[Group].ADCx->SR & ADC_SR_STRT)
    {
        Status = ADC_IDLE;
    }
    else if (Adc_gkt_Config.ChannelConfig[Group].ADCx->SR & ADC_SR_EOC)
    {
        Status = ADC_COMPLETED;
    }
    else
    {
        Status = ADC_BUSY;
    }

    if (Adc_gkt_Config.ChannelConfig[Group].ADCx->SR & ADC_SR_OVR)
    {
        Status = ADC_STREAM_COMPLETED;
    }

    return Status;
}

/**
 * \brief      Read the group conversion result of the last completed conversion.
 * \param      Group : Numeric ID of requested ADC Channel group.
 * \param      DataBufferPtr : Pointer to the buffer where the conversion result will be stored.
 * \return     E_OK if the conversion has completed and the data is available, E_NOT_OK otherwise.
 */
 Std_ReturnType Adc_ReadGroup(Adc_GroupType Group, Adc_ValueGroupType *DataBufferPtr)
 {
    Std_ReturnType RetVal;

    if (Group >= ADC_NUMBER_OF_GROUPS)
    {
        RetVal = E_NOT_OK;
    }

    DataBufferPtr = Adc_gkt_Config.ChannelConfig[Group].ADCx->DR;
    RetVal = E_OK;

    return RetVal;
 }
 