/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       DioIf_Cfg.h
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Redefines all the DIO channels, adding information about the used peripherals.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef DIOIF_CFG_H
#define DIOIF_CFG_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Defines the ID of the 7 segments display's left digit port as the uC internal DIO C port. */
#define DIOIF_PORT_DISP7SEG_LEFT_DIGIT             ((DioIf_PortType) DIO_C)

/** \brief     Defines the ID of the 7 segments display's right digit port as the uC internal DIO D port. */
#define DIOIF_PORT_DISP7SEG_RIGHT_DIGIT            ((DioIf_PortType) DIO_D)

/** \brief     Defines the ID of the front left turning LED DIO channel as the uC internal DIO A10 channel. */
#define DIOIF_CHANNEL_LED_TURN_FRONT_LEFT          ((DioIf_ChannelType) DIO_A_10)

/** \brief     Defines the ID of the front right turning LED DIO channel as the uC internal DIO A8 channel. */
#define DIOIF_CHANNEL_LED_TURN_FRONT_RIGHT         ((DioIf_ChannelType) DIO_A_8)

/** \brief     Defines the ID of the back left turning LED DIO channel as the uC internal DIO C1 channel. */
#define DIOIF_CHANNEL_LED_TURN_BACK_LEFT           ((DioIf_ChannelType) DIO_C_1)

/** \brief     Defines the ID of the back right turning LED DIO channel as the uC internal DIO D11 channel. */
#define DIOIF_CHANNEL_LED_TURN_BACK_RIGHT          ((DioIf_ChannelType) DIO_D_11)

/** \brief     Defines the ID of the buzzer's horn IO DIO channel as the uC internal DIO A7 channel. */
#define DIOIF_CHANNEL_BUZZ_HORN_IO                 ((DioIf_ChannelType) DIO_A_7)

/** \brief     Defines the ID of the buzzer's horn VCC DIO channel as the uC internal DIO A6 channel. */
#define DIOIF_CHANNEL_BUZZ_HORN_VCC                ((DioIf_ChannelType) DIO_A_6)

/** \brief     Defines the ID of the left turning button DIO channel as the uC internal DIO A3 channel. */
#define DIOIF_CHANNEL_BTN_LEFT                     ((DioIf_ChannelType) DIO_A_3)

/** \brief     Defines the ID of the right turning button DIO channel as the uC internal DIO A2 channel. */
#define DIOIF_CHANNEL_BTN_RIGHT                    ((DioIf_ChannelType) DIO_A_2)

/** \brief     Defines the ID of the hazard button DIO channel as the uC internal DIO A5 channel. */
#define DIOIF_CHANNEL_BTN_HAZARD                   ((DioIf_ChannelType) DIO_A_5)

/** \brief     Defines the ID of the horn button DIO channel as the uC internal DIO A4 channel. */
#define DIOIF_CHANNEL_BTN_HORN                     ((DioIf_ChannelType) DIO_A_4)

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Constants                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Variables                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Functions                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
#endif /* DIOIF_CFG_H */
