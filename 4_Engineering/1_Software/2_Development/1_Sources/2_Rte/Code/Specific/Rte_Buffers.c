/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Rte_Buffers.c
 *    \author     RTE Generator
 *    \brief      Generated file - shall not be manually edited. 
 *                Declares all the RTE buffers that are used in the read / write operations.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Rte_Buffers.h"
#include "Rte.h"

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

/* Buffers. */
Rte_BtnStatusType Rte_BtnStatus_Left_Buf;
Rte_BtnStatusType Rte_BtnStatus_Right_Buf;
Rte_BtnStatusType Rte_BtnStatus_Hazard_Buf;
Rte_BtnStatusType Rte_BtnStatus_Horn_Buf;

Rte_BuzzControlType Rte_BuzzControl_Horn_Buf;

Rte_LedControlType Rte_LedControl_TurnFrontLeft_Buf;
Rte_LedControlType Rte_LedControl_TurnFrontRight_Buf;
Rte_LedControlType Rte_LedControl_TurnBackLeft_Buf;
Rte_LedControlType Rte_LedControl_TurnBackRight_Buf;
Rte_LedControlType Rte_LedControl_IllumDay_Buf;
Rte_LedControlType Rte_LedControl_IllumNight_Buf;

Rte_ServoControlType Rte_ServoControl_TurnLeft_Buf;
Rte_ServoControlType Rte_ServoControl_TurnRight_Buf;

Rte_AnSnsStatusType Rte_AnSnsStatus_Steer_Buf;
Rte_AnSnsStatusType Rte_AnSnsStatus_Luminance_Buf;

Rte_SwPwmControlType Rte_SwPwmControl_Horn_Buf;
Rte_SwPwmControlType Rte_SwPwmControl_Turn_Buf;

Rte_SwPwmStatusType Rte_SwPwmStatus_Horn_Buf;
Rte_SwPwmStatusType Rte_SwPwmStatus_Turn_Buf;

Rte_Disp7SegControlType Rte_Disp7SegControl_User_Buf;

Rte_FadeControlType Rte_FadeControl_IllumDay_Buf;
Rte_FadeControlType Rte_FadeControl_IllumNight_Buf;

Rte_FadeStatusType Rte_FadeStatus_IllumDay_Buf;
Rte_FadeStatusType Rte_FadeStatus_IllumNight_Buf;

Rte_SteerConfigType Rte_VehMStatus_SteerConfig_Buf;
Rte_HornConfigType Rte_VehMStatus_HornConfig_Buf;
Rte_TurnConfigType Rte_VehMStatus_TurnConfig_Buf;
Rte_IllumConfigType Rte_VehMStatus_IllumConfig_Buf;
Rte_VehicleStateType Rte_VehMStatus_VehicleState_Buf;

/* Update flags. */
boolean Rte_SwPwmControl_SwPwmIn_Horn_UpdateFlag;
boolean Rte_SwPwmControl_SwPwmIn_Turn_UpdateFlag;
boolean Rte_FadeControl_FadeIn_IllumDay_UpdateFlag;
boolean Rte_FadeControl_FadeIn_IllumNight_UpdateFlag;

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

