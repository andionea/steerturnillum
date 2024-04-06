/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Rte_Buffers.h
 *    \author     RTE Generator
 *    \brief      Generated file - shall not be manually edited. 
 *                Exports all the RTE buffers that are used in the read / write operations.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef RTE_BUFFERS_H
#define RTE_BUFFERS_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Rte_Type.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Variables                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/* Buffers. */
extern Rte_BtnStatusType Rte_BtnStatus_Left_Buf;
extern Rte_BtnStatusType Rte_BtnStatus_Right_Buf;
extern Rte_BtnStatusType Rte_BtnStatus_Hazard_Buf;
extern Rte_BtnStatusType Rte_BtnStatus_Horn_Buf;

extern Rte_BuzzControlType Rte_BuzzControl_Horn_Buf;

extern Rte_LedControlType Rte_LedControl_TurnFrontLeft_Buf;
extern Rte_LedControlType Rte_LedControl_TurnFrontRight_Buf;
extern Rte_LedControlType Rte_LedControl_TurnBackLeft_Buf;
extern Rte_LedControlType Rte_LedControl_TurnBackRight_Buf;
extern Rte_LedControlType Rte_LedControl_IllumDay_Buf;
extern Rte_LedControlType Rte_LedControl_IllumNight_Buf;

extern Rte_ServoControlType Rte_ServoControl_TurnLeft_Buf;
extern Rte_ServoControlType Rte_ServoControl_TurnRight_Buf;

extern Rte_AnSnsStatusType Rte_AnSnsStatus_Steer_Buf;
extern Rte_AnSnsStatusType Rte_AnSnsStatus_Luminance_Buf;

extern Rte_SwPwmControlType Rte_SwPwmControl_Horn_Buf;
extern Rte_SwPwmControlType Rte_SwPwmControl_Turn_Buf;

extern Rte_SwPwmStatusType Rte_SwPwmStatus_Horn_Buf;
extern Rte_SwPwmStatusType Rte_SwPwmStatus_Turn_Buf;

extern Rte_Disp7SegControlType Rte_Disp7SegControl_User_Buf;

extern Rte_FadeControlType Rte_FadeControl_IllumDay_Buf;
extern Rte_FadeControlType Rte_FadeControl_IllumNight_Buf;

extern Rte_FadeStatusType Rte_FadeStatus_IllumDay_Buf;
extern Rte_FadeStatusType Rte_FadeStatus_IllumNight_Buf;

extern Rte_SteerConfigType Rte_VehMStatus_SteerConfig_Buf;
extern Rte_HornConfigType Rte_VehMStatus_HornConfig_Buf;
extern Rte_TurnConfigType Rte_VehMStatus_TurnConfig_Buf;
extern Rte_IllumConfigType Rte_VehMStatus_IllumConfig_Buf;
extern Rte_VehicleStateType Rte_VehMStatus_VehicleState_Buf;

/* Update flags. */
extern boolean Rte_SwPwmControl_SwPwmIn_Horn_UpdateFlag;
extern boolean Rte_SwPwmControl_SwPwmIn_Turn_UpdateFlag;
extern boolean Rte_FadeControl_FadeIn_IllumDay_UpdateFlag;
extern boolean Rte_FadeControl_FadeIn_IllumNight_UpdateFlag;

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Constants                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Functions                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
#endif /* RTE_BUFFERS_H */