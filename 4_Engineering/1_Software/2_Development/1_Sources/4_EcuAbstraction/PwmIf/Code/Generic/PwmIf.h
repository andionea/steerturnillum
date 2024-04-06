/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       PwmIf.h
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Redefines all PWM driver interfaces and data types, which is sufficient for this PWM Interface
 *                option, since it uses only internal PWM driver channels.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef PWMIF_H
#define PWMIF_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Pwm.h"
#include "PwmIf_Cfg.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

#if (STD_ON == PWM_API_SET_DUTY_CYCLE)
/** \brief     Sets the specified duty cycle on the specified PWM channel. */
#define PwmIf_SetDutyCycle(ChannelNumber, DutyCycle)             \
   Pwm_SetDutyCycle((Pwm_ChannelType) (ChannelNumber), (uint16) DutyCycle)
#endif /* (STD_ON == IOR_PWM_API_SET_DUTY_CYCLE) */


#if (STD_ON == PWM_API_SET_PERIOD_AND_DUTY)
/** \brief     Sets the specified duty cycle and period to the specified PWM channel. */
#define PwmIf_SetPeriodAndDuty(ChannelNumber, Period, DutyCycle) \
   Pwm_SetPeriodAndDuty((Pwm_ChannelType) (ChannelNumber), (Pwm_PeriodType) Period, (uint16) DutyCycle)
#endif /* (STD_ON == IOR_PWM_API_SET_PERIOD_AND_DUTY) */


#if (STD_ON == PWM_API_SET_OUTPUT_TO_IDLE)
/** \brief     Sets the specified duty cycle on the specified PWM channel. */
#define PwmIf_SetOutputToIdle(ChannelNumber)                     \
   Pwm_SetOutputToIdle((Pwm_ChannelType) ChannelNumber)
#endif /* (STD_ON == IOR_PWM_API_SET_OUTPUT_TO_IDLE) */


#if (STD_ON == PWM_API_GET_OUTPUT_STATE)
/** \brief     Sets the specified duty cycle on the specified PWM channel. */
#define PwmIf_GetOutputState(ChannelNumber)                      \
   (PwmIf_OutputStateType) Pwm_GetOutputState((Pwm_ChannelType) ChannelNumber)
#endif /* (STD_ON == IOR_PWM_API_GET_OUTPUT_STATE) */

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Represents the type that holds the numeric IDs of all PWM channels. The IDs are zero based. */
typedef Pwm_ChannelType PwmIf_ChannelType;

#if (STD_ON == PWM_API_SET_PERIOD_AND_DUTY)
/** \brief     Represents the type that defines the period of a PWM channel. */
typedef Pwm_PeriodType Pwm_PeriodType;
#endif /* (STD_ON == PWM_API_SET_PERIOD_AND_DUTY) */

/** \brief     Represents the type that defines the output state of a PWM channel. */
typedef enum
{
   /** \brief     The PWM channel is in low state. */
   PWMIF_LOW,

   /** \brief     The PWM channel is in high state. */
   PWMIF_HIGH,
} PwmIf_OutputStateType;

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
#endif /* PWMIF_H */
