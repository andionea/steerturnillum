/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       DioIf.h
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Redefines all DIO driver's interfaces and data types, which is sufficient for this DIO Interface
 *                option, since it uses only internal DIO driver channels.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef DIOIF_H
#define DIOIF_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Dio.h"
#include "DioIf_Cfg.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

#if (STD_ON == DIO_API_CHANNELS)
/** \brief     Reads the current logical value from the specified individual input channel. */
#define DioIf_ReadChannel(ChannelId)                       \
   (DioIf_LevelType) Dio_ReadChannel((Dio_ChannelType) (ChannelId))

/** \brief     Writes the specified individual output channel with the specified logical value. */
#define DioIf_WriteChannel(ChannelId, Level)               \
   Dio_WriteChannel((Dio_ChannelType) (ChannelId), (Dio_LevelType) (Level))

/** \brief     Toggles and returns the current logical value on a specified individual output channel. */
#define DioIf_FlipChannel(ChannelId)                       \
   (DioIf_LevelType) Dio_FlipChannel((Dio_ChannelType) (ChannelId))
#endif /* (STD_ON == DIO_API_CHANNELS) */


#if (STD_ON == DIO_API_CHANNEL_GROUPS)
/** \brief     Reads the current logical values (atomic read) of all the channels from the specified channel group. */
#define DioIf_ReadChannelGroup(ChannelGroupIdPtr)          \
   (DioIf_PortLevelType) Dio_ReadChannelGroup((Dio_ChannelGroupType*) (ChannelGroupIdPtr))

/** \brief     Writes the desired logical values (atomic write) of all the channels from the specified channel group. */
#define DioIf_WriteChannelGroup(ChannelGroupIdPtr, Level)  \
   Dio_WriteChannelGroup((Dio_ChannelGroupType*) (ChannelGroupIdPtr), (Dio_PortLevelType) (Level))
#endif /* (STD_ON == DIO_API_CHANNEL_GROUPS) */


#if (STD_ON == DIO_API_PORTS)
/** \brief     Gets the full value from the specified input port. */
#define DioIf_ReadPort(PortId)                             \
   (DioIf_PortLevelType) Dio_ReadPort((Dio_PortType) (PortId))

/** \brief     Sets the desired full value on the specified output port. */
#define DioIf_WritePort(PortId, Level)                            \
   Dio_WritePort((Dio_PortType) (PortId), (Dio_PortLevelType) (Level))
#endif /* (STD_ON == DIO_API_PORTS) */

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

#if (STD_ON == DIO_API_CHANNELS)
/** \brief     Represents all possible levels of a DIO channel (STD_HIGH and STD_LOW). */
typedef Dio_LevelType DioIf_LevelType;

/** \brief     Represents the type that holds the numeric IDs of all DIOIF channels. */
typedef Dio_ChannelType DioIf_ChannelType;
#endif /* (STD_ON == DIOIF_DIO_API_CHANNELS) */


#if ((STD_ON == DIO_API_CHANNEL_GROUPS) || (STD_ON == DIO_API_PORTS))
/** \brief     Represents the width of a port. */
typedef Dio_PortLevelType DioIf_PortLevelType;

/** \brief     Represents the type that holds the numeric IDs of all ports. */
typedef Dio_PortType DioIf_PortType;
#endif /* ((STD_ON == DIOIF_DIO_API_CHANNEL_GROUPS) || (STD_ON == DIOIF_DIO_API_PORTS)) */


#if (STD_ON == DIO_API_CHANNEL_GROUPS)
/** \brief     Represents the definition of a channel group, consisting of several adjoining channels within a port. */
typedef Dio_ChannelGroupType DioIf_ChannelGroupType;
#endif /* (STD_ON == DIOIF_DIO_API_CHANNEL_GROUPS) */

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
#endif /* DIOIF_H */
