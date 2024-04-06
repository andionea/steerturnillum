/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Rte_Steer.h
 *    \author     RTE Generator
 *    \brief      Generated file - shall not be manually edited. 
 *                Implements all the RTE read and write operations that are performed by the Steer software
 *                component.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef RTE_STEER_H
#define RTE_STEER_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Rte.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

#define Rte_Read_AnSnsIn_Steer(x) ((*x) = Rte_AnSnsStatus_Steer_Buf)
#define Rte_Read_AnSnsIn_Luminance(x) ((*x) = Rte_AnSnsStatus_Luminance_Buf)

#define Rte_Read_BtnIn_Left(x) ((*x) = Rte_BtnStatus_Left_Buf)
#define Rte_Read_BtnIn_Right(x) ((*x) = Rte_BtnStatus_Right_Buf)
#define Rte_Read_BtnIn_Hazard(x) ((*x) = Rte_BtnStatus_Hazard_Buf)
#define Rte_Read_BtnIn_Horn(x) ((*x) = Rte_BtnStatus_Horn_Buf)

#define Rte_Read_VehMIn_SteerConfig(x) ((*x) = Rte_VehMStatus_SteerConfig_Buf)
#define Rte_Read_VehMIn_HornConfig(x) ((*x) = Rte_VehMStatus_HornConfig_Buf)
#define Rte_Read_VehMIn_TurnConfig(x) ((*x) = Rte_VehMStatus_TurnConfig_Buf)
#define Rte_Read_VehMIn_IllumConfig(x) ((*x) = Rte_VehMStatus_IllumConfig_Buf)
#define Rte_Read_VehMIn_VehicleState(x) ((*x) = Rte_VehMStatus_VehicleState_Buf)

#define Rte_Read_SwPwmIn_Horn(x) ((*x) = Rte_SwPwmStatus_Horn_Buf)
#define Rte_Read_SwPwmIn_Turn(x) ((*x) = Rte_SwPwmStatus_Turn_Buf)

#define Rte_Write_ServoOut_TurnLeft(x) (Rte_ServoControl_TurnLeft_Buf = (*x))
#define Rte_Write_ServoOut_TurnRight(x) (Rte_ServoControl_TurnRight_Buf = (*x))

#define Rte_Write_BuzzOut_Horn(x) (Rte_BuzzControl_Horn_Buf = (*x))

#define Rte_Write_SwPwmOut_Horn(x) \
   do \
   { \
      Rte_SwPwmControl_Horn_Buf = (*x); \
      Rte_SwPwmControl_SwPwmIn_Horn_UpdateFlag = TRUE; \
   } while(0)
#define Rte_Write_SwPwmOut_Turn(x) \
   do \
   { \
      Rte_SwPwmControl_Turn_Buf = (*x); \
      Rte_SwPwmControl_SwPwmIn_Turn_UpdateFlag = TRUE; \
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
#endif /* RTE_STEER_H */