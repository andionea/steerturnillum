/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Rte_Type.h
 *    \author     RTE Generator
 *    \brief      Generated file - shall not be manually edited. 
 *                Exports only the software component runnables (global functions), usually only one initialization
 *                and one cyclic runnable. This header must exist for every software component and its name shall be
 *                the short name of the component that is used as a prefix for all the global functions and variables
 *                inside the module.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef RTE_TYPE_H
#define RTE_TYPE_H

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

typedef uint16 Rte_ServoControlType;
typedef uint16 Rte_AnSnsStatusType;
typedef uint8 Rte_SwPwmLevelType;
typedef uint32 Rte_IllumConfigType;

typedef enum
{
   RTE_BTN_NOT_PRESSED = 0,
   RTE_BTN_PRESSED = 1,
   RTE_BTN_INIT = 2,
} Rte_BtnStatusType;

typedef enum
{
   RTE_BUZZ_OFF = 0,
   RTE_BUZZ_ON = 1,
} Rte_BuzzControlType;

typedef enum
{
   RTE_LED_OFF = 0,
   RTE_LED_ON = 1,
} Rte_LedStateType;

typedef enum
{
   RTE_SWPWM_OFF = 0,
   RTE_SWPWM_ON_CONTINUOUS = 1,
   RTE_SWPWM_ON_FINITE = 2,
} Rte_SwPwmStateType;

typedef enum
{
   RTE_DISP7SEG_DOTS_BOTH_OFF = 0,
   RTE_DISP7SEG_DOTS_LEFT_ON = 1,
   RTE_DISP7SEG_DOTS_RIGHT_ON = 2,
   RTE_DISP7SEG_DOTS_BOTH_ON = 3,
} Rte_Disp7SegDotsType;

typedef enum
{
   RTE_STEER_CONFIG_PARALLEL = 0,
   RTE_STEER_CONFIG_ACKERMANN = 1,
} Rte_SteerConfigType;

typedef enum
{
   RTE_HORN_MODE_CONTINUOUS = 0,
   RTE_HORN_MODE_BEEPING = 1,
} Rte_HornModeType;

typedef enum
{
   RTE_VEHICLE_STATE_NORMAL = 0,
   RTE_VEHICLE_STATE_CONFIG = 1,
} Rte_VehicleStateType;

typedef struct
{
   Rte_LedStateType t_State;
   uint16 us_Duty;
} Rte_LedControlType;

typedef struct
{
   uint32 ul_TimeUs;
   uint16 us_StartValue;
   uint16 us_TargetValue;
} Rte_FadeControlType;

typedef struct
{
   uint32 ul_TimeLeftUs;
   uint16 us_CurrentValue;
} Rte_FadeStatusType;

typedef struct
{
   Rte_SwPwmStateType t_State;
   uint32 ul_PeriodUs;
   uint32 ul_ActiveUs;
   uint16 us_NrOfPeriods;
} Rte_SwPwmControlType;

typedef struct
{
   Rte_Disp7SegDotsType t_Dots;
   uint8 uc_Decimals;
} Rte_Disp7SegControlType;

typedef struct
{
   Rte_HornModeType t_Mode;
   uint32 ul_PeriodUs;
} Rte_HornConfigType;

typedef struct
{
   uint32 ul_PeriodUs;
   uint8 uc_NrOfPeriods;
} Rte_TurnConfigType;

typedef struct
{
   uint16 us_PeriodsLeft;
   Rte_SwPwmLevelType t_CurrentLevel;
} Rte_SwPwmStatusType;

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
#endif /* RTE_TYPE_H */