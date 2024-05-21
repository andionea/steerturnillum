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
    if (ConfigPtr == NULL_PTR)
    {
        return;
    }
    
    Init_gv_Masked32Bits(Adc_gkt_Config.AdcConfig);
}

/**
 * \brief      Starts the conversion of all channels of the requested ADC Channel group.
 * \param      Group : Numeric ID of requested ADC Channel group.
 * \return     -
 */
void Adc_StartGroupConversion(Adc_GroupType Group)
{
     // Check if the group is valid
    if (Group >= ADC_NUMBER_OF_GROUPS)
    {
        return E_NOT_OK;
    }
    
    if (Group >= ADC_NUMBER_OF_GROUPS)
    {
        return;
    }

    Adc_gkt_Config.ChannelConfig[Group].ADCx->CR2 |= ADC_CR2_SWSTART;
    
}

/**
 * \brief      Return the conversion status of the requested ADC Channel group.
 * \param      Group : Numeric ID of requested ADC Channel group.
 * \return     Conversion status of the requested ADC Channel group.
 */
Adc_StatusType Adc_GetGroupStatus(Adc_GroupType Group)
{
     // Check if the group is valid
    if (Group >= ADC_NUMBER_OF_GROUPS)
    {
        return E_NOT_OK;
    }

    if (Adc_gkt_Config.ChannelConfig[Group].ADCx->CR2 & ADC_CR2_SWSTART == 0)
    {
        return ADC_IDLE;
    }

    if (Adc_gkt_Config.ChannelConfig[Group].ADCx->SR & ADC_SR_EOC)
    {
        return ADC_COMPLETED;
    }
    else
    {
        return ADC_BUSY;
    }

    if (Adc_gkt_Config.ChannelConfig[Group].ADCx->SR & ADC_SR_OVR)
    {
        return ADC_STREAM_COMPLETED;
    }
}

/**
 * \brief      Read the group conversion result of the last completed conversion.
 * \param      Group : Numeric ID of requested ADC Channel group.
 * \param      DataBufferPtr : Pointer to the buffer where the conversion result will be stored.
 * \return     E_OK if the conversion has completed and the data is available, E_NOT_OK otherwise.
 */
 Std_ReturnType Adc_ReadGroup(Adc_GroupType Group, Adc_ValueGroupType *DataBufferPtr)
 {
    // Check if the group is valid
    if (Group >= ADC_NUMBER_OF_GROUPS)
    {
        return E_NOT_OK;
    }

    DataBufferPtr = Adc_gkt_Config.ChannelConfig[Group].ADCx->DR;
 }
 