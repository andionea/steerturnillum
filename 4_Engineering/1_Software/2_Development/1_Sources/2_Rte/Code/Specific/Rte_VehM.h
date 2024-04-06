/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Rte_VehM.h
 *    \author     RTE Generator
 *    \brief      Generated file - shall not be manually edited. 
 *                Implements all the RTE read and write operations that are performed by the VehM software
 *                component.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef RTE_VEHM_H
#define RTE_VEHM_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Rte.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

#define Rte_Read_BtnIn_Left(x) ((*x) = Rte_BtnStatus_Left_Buf)
#define Rte_Read_BtnIn_Right(x) ((*x) = Rte_BtnStatus_Right_Buf)
#define Rte_Read_BtnIn_Hazard(x) ((*x) = Rte_BtnStatus_Hazard_Buf)
#define Rte_Read_BtnIn_Horn(x) ((*x) = Rte_BtnStatus_Horn_Buf)

#define Rte_Read_AnSnsIn_Steer(x) ((*x) = Rte_AnSnsStatus_Steer_Buf)
#define Rte_Read_AnSnsIn_Luminance(x) ((*x) = Rte_AnSnsStatus_Luminance_Buf)

#define Rte_Write_BuzzOut_Horn(x) (Rte_BuzzControl_Horn_Buf = (*x))

#define Rte_Write_Disp7SegOut_User(x) (Rte_Disp7SegControl_User_Buf = (*x))

#define Rte_Write_LedOut_TurnFrontLeft(x) (Rte_LedControl_TurnFrontLeft_Buf = (*x))
#define Rte_Write_LedOut_TurnFrontRight(x) (Rte_LedControl_TurnFrontRight_Buf = (*x))
#define Rte_Write_LedOut_TurnBackLeft(x) (Rte_LedControl_TurnBackLeft_Buf = (*x))
#define Rte_Write_LedOut_TurnBackRight(x) (Rte_LedControl_TurnBackRight_Buf = (*x))
#define Rte_Write_LedOut_IllumDay(x) (Rte_LedControl_IllumDay_Buf = (*x))
#define Rte_Write_LedOut_IllumNight(x) (Rte_LedControl_IllumNight_Buf = (*x))

#define Rte_Write_ServoOut_TurnLeft(x) (Rte_ServoControl_TurnLeft_Buf = (*x))
#define Rte_Write_ServoOut_TurnRight(x) (Rte_ServoControl_TurnRight_Buf = (*x))

#define Rte_Write_VehMOut_SteerConfig(x) (Rte_VehMStatus_SteerConfig_Buf = (*x))
#define Rte_Write_VehMOut_HornConfig(x) (Rte_VehMStatus_HornConfig_Buf = (*x))
#define Rte_Write_VehMOut_TurnConfig(x) (Rte_VehMStatus_TurnConfig_Buf = (*x))
#define Rte_Write_VehMOut_IllumConfig(x) (Rte_VehMStatus_IllumConfig_Buf = (*x))
#define Rte_Write_VehMOut_VehicleState(x) (Rte_VehMStatus_VehicleState_Buf = (*x))

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

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
#endif /* RTE_VEHM_H */