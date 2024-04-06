/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Rte_Illum.h
 *    \author     RTE Generator
 *    \brief      Generated file - shall not be manually edited. 
 *                Implements all the RTE read and write operations that are performed by the Illum software
 *                component.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef RTE_ILLUM_H
#define RTE_ILLUM_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Rte.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

#define Rte_Read_AnSnsIn_Steer(x) ((*x) = Rte_AnSnsStatus_Steer_Buf)
#define Rte_Read_AnSnsIn_Luminance(x) ((*x) = Rte_AnSnsStatus_Luminance_Buf)

#define Rte_Read_VehMIn_SteerConfig(x) ((*x) = Rte_VehMStatus_SteerConfig_Buf)
#define Rte_Read_VehMIn_HornConfig(x) ((*x) = Rte_VehMStatus_HornConfig_Buf)
#define Rte_Read_VehMIn_TurnConfig(x) ((*x) = Rte_VehMStatus_TurnConfig_Buf)
#define Rte_Read_VehMIn_IllumConfig(x) ((*x) = Rte_VehMStatus_IllumConfig_Buf)
#define Rte_Read_VehMIn_VehicleState(x) ((*x) = Rte_VehMStatus_VehicleState_Buf)

#define Rte_Read_FadeIn_IllumDay(x) ((*x) = Rte_FadeStatus_IllumDay_Buf)
#define Rte_Read_FadeIn_IllumNight(x) ((*x) = Rte_FadeStatus_IllumNight_Buf)

#define Rte_Write_LedOut_TurnFrontLeft(x) (Rte_LedControl_TurnFrontLeft_Buf = (*x))
#define Rte_Write_LedOut_TurnFrontRight(x) (Rte_LedControl_TurnFrontRight_Buf = (*x))
#define Rte_Write_LedOut_TurnBackLeft(x) (Rte_LedControl_TurnBackLeft_Buf = (*x))
#define Rte_Write_LedOut_TurnBackRight(x) (Rte_LedControl_TurnBackRight_Buf = (*x))
#define Rte_Write_LedOut_IllumDay(x) (Rte_LedControl_IllumDay_Buf = (*x))
#define Rte_Write_LedOut_IllumNight(x) (Rte_LedControl_IllumNight_Buf = (*x))

#define Rte_Write_FadeOut_IllumDay(x) \
   do \
   { \
      Rte_FadeControl_IllumDay_Buf = (*x); \
      Rte_FadeControl_FadeIn_IllumDay_UpdateFlag = TRUE; \
   } while(0)
#define Rte_Write_FadeOut_IllumNight(x) \
   do \
   { \
      Rte_FadeControl_IllumNight_Buf = (*x); \
      Rte_FadeControl_FadeIn_IllumNight_UpdateFlag = TRUE; \
   } while(0)

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
#endif /* RTE_ILLUM_H */