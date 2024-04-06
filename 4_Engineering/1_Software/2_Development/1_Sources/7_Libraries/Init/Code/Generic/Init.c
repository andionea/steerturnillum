/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Init.c
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Implements initialization routines for sets of 8, 16 or 32 bit variables.
 *
 *                The API offers two possibilities for loading the variables:
 *                -Full: the variables are (fully) written with predefined values;
 *                -Masked: subsets of each referenced variable are written with (AND, OR) masks.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Init.h"

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
 * \brief      Initializes the referenced set of 8 bit variables with predefined values.
 * \param      kpt_Full8BitsConfig : Configuration structure to be loaded for 8 bit variables.
 * \return     -
 */
void Init_gv_Full8Bits(const Init_Full8BitsConfigType* kpt_Full8BitsConfig)
{
   uint16 us_I;
   for (us_I = 0U; us_I < kpt_Full8BitsConfig->us_NrOfConfigs; us_I++)
   {
      (*kpt_Full8BitsConfig->kpt_ConfigTable[us_I].puc_Variable) =
         kpt_Full8BitsConfig->kpt_ConfigTable[us_I].uc_LoadValue;
   }
}

/**
 * \brief      Initializes the referenced set of 16 bit variables with predefined values.
 * \param      kpt_Full16BitsConfig : Configuration structure to be loaded for 16 bit variables.
 * \return     -
 */
void Init_gv_Full16Bits(const Init_Full16BitsConfigType* kpt_Full16BitsConfig)
{
   uint16 us_I;
   for (us_I = 0U; us_I < kpt_Full16BitsConfig->us_NrOfConfigs; us_I++)
   {
      (*kpt_Full16BitsConfig->kpt_ConfigTable[us_I].pus_Variable) =
         kpt_Full16BitsConfig->kpt_ConfigTable[us_I].us_LoadValue;
   }
}

/**
 * \brief      Initializes the referenced set of 32 bit variables with predefined values.
 * \param      kpt_Full32BitsConfig : Configuration structure to be loaded for 32 bit variables.
 * \return     -
 */
void Init_gv_Full32Bits(const Init_Full32BitsConfigType* kpt_Full32BitsConfig)
{
   uint16 us_I;
   for (us_I = 0U; us_I < kpt_Full32BitsConfig->us_NrOfConfigs; us_I++)
   {
      (*kpt_Full32BitsConfig->kpt_ConfigTable[us_I].pul_Variable) =
         kpt_Full32BitsConfig->kpt_ConfigTable[us_I].ul_LoadValue;
   }
}

/**
 * \brief      Initializes the referenced set of 8 bit variables by applying AND and OR masks.
 * \param      kpt_Masked8BitsConfig : Configuration structure to be loaded for 8 bit variables.
 * \return     -
 */
void Init_gv_Masked8Bits(const Init_Masked8BitsConfigType* kpt_Masked8BitsConfig)
{
   uint16 us_I;
   volatile uint8 uc_Val;
   for (us_I = 0U; us_I < kpt_Masked8BitsConfig->us_NrOfConfigs; us_I++)
   {
      /* Apply the masks on a local variable to avoid writing the destination variable twice. */
      uc_Val = *kpt_Masked8BitsConfig->kpt_ConfigTable[us_I].puc_Variable;

      /* Apply the AND mask. */
      uc_Val &= kpt_Masked8BitsConfig->kpt_ConfigTable[us_I].uc_MaskAnd;

      /* Apply the OR mask. */
      uc_Val |= kpt_Masked8BitsConfig->kpt_ConfigTable[us_I].uc_MaskOr;

      /* Write back the local variable to the destination variable. */
      *kpt_Masked8BitsConfig->kpt_ConfigTable[us_I].puc_Variable = uc_Val;
   }
}

/**
 * \brief      Initializes the referenced set of 16 bit variables by applying AND and OR masks.
 * \param      kpt_Masked16BitsConfig : Configuration structure to be loaded for 16 bit variables.
 * \return     -
 */
void Init_gv_Masked16Bits(const Init_Masked16BitsConfigType* kpt_Masked16BitsConfig)
{
   uint16 us_I;
   volatile uint16 us_Val;
   for (us_I = 0U; us_I < kpt_Masked16BitsConfig->us_NrOfConfigs; us_I++)
   {
      /* Apply the masks on a local variable to avoid writing the destination variable twice. */
      us_Val = *kpt_Masked16BitsConfig->kpt_ConfigTable[us_I].pus_Variable;

      /* Apply the AND mask. */
      us_Val &= kpt_Masked16BitsConfig->kpt_ConfigTable[us_I].us_MaskAnd;

      /* Apply the OR mask. */
      us_Val |= kpt_Masked16BitsConfig->kpt_ConfigTable[us_I].us_MaskOr;

      /* Write back the local variable to the destination variable. */
      *kpt_Masked16BitsConfig->kpt_ConfigTable[us_I].pus_Variable = us_Val;
   }
}

/**
 * \brief      Initializes the referenced set of 32 bit variables by applying AND and OR masks.
 * \param      kpt_Masked32BitsConfig : Configuration structure to be loaded for 32 bit variables.
 * \return     -
 */
void Init_gv_Masked32Bits(const Init_Masked32BitsConfigType* kpt_Masked32BitsConfig)
{
   uint16 us_I;
   volatile uint32 ul_Val;
   for (us_I = 0U; us_I < kpt_Masked32BitsConfig->us_NrOfConfigs; us_I++)
   {
      /* Apply the masks on a local variable to avoid writing the destination variable twice. */
      ul_Val = *kpt_Masked32BitsConfig->kpt_ConfigTable[us_I].pul_Variable;

      /* Apply the AND mask. */
      ul_Val &= kpt_Masked32BitsConfig->kpt_ConfigTable[us_I].ul_MaskAnd;

      /* Apply the OR mask. */
      ul_Val |= kpt_Masked32BitsConfig->kpt_ConfigTable[us_I].ul_MaskOr;

      /* Write back the local variable to the destination variable. */
      *kpt_Masked32BitsConfig->kpt_ConfigTable[us_I].pul_Variable = ul_Val;
   }
}
