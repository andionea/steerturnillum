/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Swc_Core.c
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Implements the behavior of the component, consisting of an initialization runnable for setting up
 *                start values for all the driver global variables and a main function consisting of reading the
 *                input values from RTE, processing them according to the configuration and writing the processing
 *                result back to the RTE.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Swc_Core.h"

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

/** \brief     Stores the input data that is read from RTE. */
uint8 Swc_gauc_InputValues[SWC_NUMBER_OF_INSTANCES];

/** \brief     Stores the output data that is written RTE. */
uint8 Swc_gauc_OutputValues[SWC_NUMBER_OF_INSTANCES];

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
 * \brief      Initializes all the core static and global variables.
 * \param      -
 * \return     -
 */
void Swc_Init(void)
{
   uint8 uc_I;

   for (uc_I = 0U; uc_I < SWC_NUMBER_OF_INSTANCES; uc_I++)
   {
      Swc_gauc_InputValues[uc_I] = 0U;
      Swc_gauc_OutputValues[uc_I] = 0U;
   }
}

/**
 * \brief      Implements the cyclic job processing for all the SWC instances. Updates the output values as the sum
 *             between the current output value and the read input values modulo the configured modulo value.
 * \param      -
 * \return     -
 */
void Swc_Main(void)
{
   uint8 uc_I;

   Swc_gv_RteInputUpdate();

   for (uc_I = 0U; uc_I < SWC_NUMBER_OF_INSTANCES; uc_I++)
   {
      Swc_gauc_OutputValues[uc_I] = ((uint16) Swc_gauc_OutputValues[uc_I] + Swc_gauc_InputValues[uc_I])
         % Swc_gkauc_Config[uc_I];
   }

   Swc_gv_RteOutputUpdate();
}
