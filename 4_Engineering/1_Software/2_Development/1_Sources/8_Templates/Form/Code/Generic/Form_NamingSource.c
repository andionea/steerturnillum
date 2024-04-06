/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Form_NamingSource.c
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Example for using the .c file template. The brief should be kept as short as possible (maximum of
 *                three lines, with respect to the given format and without passing over the 120 characters per line),
 *                and only general information should be provided in this section.
 *
 *    Example detailed description of the template header. This paragraph has the purpose of providing details that
 *    cannot be integrated in the brief description, since it would take too much space.
 *    This section is not mandatory and shall be used only when a brief description of the file is not enough. In case
 *    this section is not needed then the line containing the end of comment '*'/ shall be the only line between the
 *    last line of the brief and the border, like in the Empty_Source.c file.
 *    The limit of 120 characters per line applies to all comments and it is also included in the formatter.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Form_NamingHeader.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Definition Of Local Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

#if (FORM_GLOBAL_MACRO_LENGTH != 0U)

#if (FORM_GLOBAL_MACRO_LENGTH == 6U)

/** \brief     Example of defining a local macro based on ifdefs. */
#define FORM_LOCAL_MACRO  (6U)

#elif (FORM_GLOBAL_MACRO_LENGTH == 4U)

/** \brief     Example of defining a local macro based on ifdefs. */
#define FORM_LOCAL_MACRO  (4U)

#elif (FORM_GLOBAL_MACRO_LENGTH == 2U)

/** \brief     Example of defining a local macro based on ifdefs. */
#define FORM_LOCAL_MACRO  (2U)

#else

/** \brief     Example of defining a local macro based on ifdefs. */
#define FORM_LOCAL_MACRO  (1U)

#endif /* (FORM_GLOBAL_MACRO_LENGTH == 6U) */

#endif /* (FORM_GLOBAL_MACRO_LENGTH != 0U) */

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Definition Of Local Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Example of defining a local constant simple data type. */
typedef uint8 Form_LocalSimpleType;

/** \brief     Example of defining a local function type. */
typedef void (Form_LocalFunctionType)(void);

/** \brief     Example of defining a local structure data type. */
typedef struct
{
   /** \brief     First member of the example structure type. */
   uint8 uc_UnsignedChar;

   /** \brief     Second member of the example structure type. */
   Form_LocalSimpleType t_CustomSimple;

   /** \brief     Third member of the example structure type. */
   Form_LocalSimpleType * pt_PointerCustomSimple;

   /** \brief     Fourth member of the example structure type. */
   Form_LocalFunctionType * pf_PointerFunction;
} Form_LocalStructureType;

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Variables                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Example of declaring a local unsigned char variable. */
static uint8 Form_uc_LocalVariableUnsignedChar = 0U;

/** \brief     Example of declaring a local unsigned char pointer variable. */
static uint8 * Form_puc_LocalVariablePointerUnsignedChar = NULL_PTR;

/** \brief     Example of declaring a local unsigned char array. */
static uint8 Form_auc_LocalVariableArrayUnsignedChar[FORM_LOCAL_MACRO] =
   { 0U };

/** \brief     Example of declaring a local signed char variable. */
static sint8 Form_sc_LocalVariableSignedChar = 0;

/** \brief     Example of declaring a local signed char pointer variable. */
static sint8 * Form_psc_LocalVariablePointerSignedChar = NULL_PTR;

/** \brief     Example of declaring a local signed char array. */
static sint8 Form_asc_LocalVariableArraySignedChar[FORM_LOCAL_MACRO] =
   { 0 };

/** \brief     Example of declaring a local unsigned short variable. */
static uint16 Form_us_LocalVariableUnsignedShort = 0U;

/** \brief     Example of declaring a local unsigned short pointer variable. */
static uint16 * Form_pus_LocalVariablePointerUnsignedShort = NULL_PTR;

/** \brief     Example of declaring a local unsigned short array. */
static uint16 Form_aus_LocalVariableArrayUnsignedShort[FORM_LOCAL_MACRO] =
   { 0U };

/** \brief     Example of declaring a local signed short variable. */
static sint16 Form_ss_LocalVariableSignedShort = 0;

/** \brief     Example of declaring a local signed short pointer variable. */
static sint16 * Form_pss_LocalVariablePointerSignedShort = NULL_PTR;

/** \brief     Example of declaring a local signed short array. */
static sint16 Form_ass_LocalVariableArraySignedShort[FORM_LOCAL_MACRO] =
   { 0 };

/** \brief     Example of declaring a local unsigned long variable. */
static uint32 Form_ul_LocalVariableUnsignedLong = 0UL;

/** \brief     Example of declaring a local unsigned long pointer variable. */
static uint32 * Form_pul_LocalVariablePointerUnsignedLong = NULL_PTR;

/** \brief     Example of declaring a local unsigned long array. */
static uint32 Form_aul_LocalVariableArrayUnsignedLong[FORM_LOCAL_MACRO] =
   { 0UL };

/** \brief     Example of declaring a local signed long variable. */
static sint32 Form_sl_LocalVariableSignedLong = 0L;

/** \brief     Example of declaring a local signed long pointer variable. */
static sint32 * Form_psl_LocalVariablePointerSignedLong = NULL_PTR;

/** \brief     Example of declaring a local signed long array. */
static sint32 Form_asl_LocalVariableArraySignedLong[FORM_LOCAL_MACRO] =
   { 0L };

/** \brief     Example of declaring a local boolean variable. */
static boolean Form_b_LocalVariableBoolean = TRUE;

/** \brief     Example of declaring a local boolean pointer variable. */
static boolean * Form_pb_LocalVariablePointerBoolean = NULL_PTR;

/** \brief     Example of declaring a local boolean array. */
static boolean Form_ab_LocalVariableArrayBoolean[FORM_LOCAL_MACRO] =
   { TRUE };

/** \brief     Example of declaring a local custom type variable. */
static Form_GlobalStructureType Form_t_LocalVariableCustomType =
   {
      0U,
      0U,
      NULL_PTR,
      NULL_PTR
   };

/** \brief     Example of declaring a local custom type pointer variable. */
static Form_GlobalStructureType * Form_pt_LocalVariablePointerCustomType = NULL_PTR;

/** \brief     Example of declaring a local custom type array. */
static Form_GlobalStructureType Form_at_LocalVariableArrayCustomType[FORM_LOCAL_MACRO] =
   {
      {
         0U,
         0U,
         NULL_PTR,
         NULL_PTR
      },
   };

/** \brief     Example of declaring a local enum type variable. */
static Form_GlobalEnumType Form_t_LocalVariableEnum = FORM_VALUE_0;

/** \brief     Example of declaring a local enum pointer variable. */
static Form_GlobalEnumType * Form_pt_LocalVariablePointerEnum = NULL_PTR;

/** \brief     Example of declaring a local enum array. */
static Form_GlobalEnumType Form_at_LocalVariableArrayEnum[FORM_LOCAL_MACRO] =
   { FORM_VALUE_0 };

/** \brief     Example of declaring a local function pointer. */
static Form_GlobalFunctionType * Form_pf_LocalVariablePointerFunction = NULL_PTR;

/** \brief     Example of declaring a local array of function pointers. */
static Form_GlobalFunctionType * Form_apf_LocalVariableArrayPointerFunction[FORM_LOCAL_MACRO] =
   { NULL_PTR };

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Variables                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Example of declaring a global unsigned char variable. */
uint8 Form_guc_GlobalVariableUnsignedChar = 0U;

/** \brief     Example of declaring a global unsigned char pointer. */
uint8 * Form_gpuc_GlobalVariablePointerUnsignedChar = NULL_PTR;

/** \brief     Example of declaring a global unsigned char array. */
uint8 Form_gauc_GlobalVariableArrayUnsignedChar[FORM_GLOBAL_MACRO_LENGTH] =
   { 0U };

/** \brief     Example of declaring a global signed char variable. */
sint8 Form_gsc_GlobalVariableSignedChar = 0;

/** \brief     Example of declaring a global signed char pointer. */
sint8 * Form_gpsc_GlobalVariablePointerSignedChar = NULL_PTR;

/** \brief     Example of declaring a global signed char array. */
sint8 Form_gasc_GlobalVariableArraySignedChar[FORM_GLOBAL_MACRO_LENGTH] =
   { 0 };

/** \brief     Example of declaring a global unsigned short variable. */
uint16 Form_gus_GlobalVariableUnsignedShort = 0U;

/** \brief     Example of declaring a global unsigned short pointer. */
uint16 * Form_gpus_GlobalVariablePointerUnsignedShort = NULL_PTR;

/** \brief     Example of declaring a global unsigned short array. */
uint16 Form_gaus_GlobalVariableArrayUnsignedShort[FORM_GLOBAL_MACRO_LENGTH] =
   { 0U };

/** \brief     Example of declaring a global signed short variable. */
sint16 Form_gss_GlobalVariableSignedShort = 0;

/** \brief     Example of declaring a global signed short pointer. */
sint16 * Form_gpss_GlobalVariablePointerSignedShort = NULL_PTR;

/** \brief     Example of declaring a global signed short array. */
sint16 Form_gass_GlobalVariableArraySignedShort[FORM_GLOBAL_MACRO_LENGTH] =
   { 0 };

/** \brief     Example of declaring a global unsigned long variable. */
uint32 Form_gul_GlobalVariableUnsignedLong = 0UL;

/** \brief     Example of declaring a global unsigned long pointer. */
uint32 * Form_gpul_GlobalVariablePointerUnsignedLong = NULL_PTR;

/** \brief     Example of declaring a global unsigned long array. */
uint32 Form_gaul_GlobalVariableArrayUnsignedLong[FORM_GLOBAL_MACRO_LENGTH] =
   { 0UL };

/** \brief     Example of declaring a global signed long variable. */
sint32 Form_gsl_GlobalVariableSignedLong = 0L;

/** \brief     Example of declaring a global signed long pointer. */
sint32 * Form_gpsl_GlobalVariablePointerSignedLong = NULL_PTR;

/** \brief     Example of declaring a global signed long array. */
sint32 Form_gasl_GlobalVariableArraySignedLong[FORM_GLOBAL_MACRO_LENGTH] =
   { 0L };

/** \brief     Example of declaring a global boolean variable. */
boolean Form_gb_GlobalVariableBoolean = TRUE;

/** \brief     Example of declaring a global boolean pointer. */
boolean * Form_gpb_GlobalVariablePointerBoolean = NULL_PTR;

/** \brief     Example of declaring a global boolean array. */
boolean Form_gab_GlobalVariableArrayBoolean[FORM_GLOBAL_MACRO_LENGTH] =
   { TRUE };

/** \brief     Example of declaring a global custom type variable. */
Form_GlobalStructureType Form_gt_GlobalVariableCustomType =
   {
      0U,
      0U,
      NULL_PTR,
      NULL_PTR,
   };

/** \brief     Example of declaring a global custom type pointer. */
Form_GlobalStructureType * Form_gpt_GlobalVariablePointerCustomType = NULL_PTR;

/** \brief     Example of declaring a global custom type array. */
Form_GlobalStructureType Form_gat_GlobalVariableArrayCustomType[FORM_GLOBAL_MACRO_LENGTH] =
   {
      {
         0U,
         0U,
         NULL_PTR,
         NULL_PTR,
      }
   };

/** \brief     Example of declaring a global enum type variable. */
Form_GlobalEnumType Form_gt_GlobalVariableEnum = FORM_VALUE_0;

/** \brief     Example of declaring a global enum pointer variable. */
Form_GlobalEnumType * Form_gpt_GlobalVariablePointerEnum = NULL_PTR;

/** \brief     Example of declaring a global enum array. */
Form_GlobalEnumType Form_gat_GlobalVariableArrayEnum[FORM_LOCAL_MACRO] =
   { FORM_VALUE_0 };

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Example of declaring a local constant unsigned char. */
static const uint8 Form_kuc_LocalConstantUnsignedChar = 0U;

/** \brief     Example of declaring a local constant unsigned char pointer. */
static const uint8 * Form_kpuc_LocalConstantPointerUnsignedChar = NULL_PTR;

/** \brief     Example of declaring a local constant unsigned char array. */
static const uint8 Form_kauc_LocalConstantArrayUnsignedChar[FORM_LOCAL_MACRO] =
   { 0U };

/** \brief     Example of declaring a local constant signed char. */
static const sint8 Form_ksc_LocalConstantSignedChar = 0;

/** \brief     Example of declaring a local constant signed char pointer. */
static const sint8 * Form_kpsc_LocalConstantPointerSignedChar = NULL_PTR;

/** \brief     Example of declaring a local constant signed char array. */
static const sint8 Form_kasc_LocalConstantArraySignedChar[FORM_LOCAL_MACRO] =
   { 0 };

/** \brief     Example of declaring a local constant unsigned short. */
static const uint16 Form_kus_LocalConstantUnsignedShort = 0U;

/** \brief     Example of declaring a local constant unsigned short pointer. */
static const uint16 * Form_kpus_LocalConstantPointerUnsignedShort = NULL_PTR;

/** \brief     Example of declaring a local constant unsigned short array. */
static const uint16 Form_kaus_LocalConstantArrayUnsignedShort[FORM_LOCAL_MACRO] =
   { 0U };

/** \brief     Example of declaring a local constant signed short. */
static const sint16 Form_kss_LocalConstantSignedShort = 0;

/** \brief     Example of declaring a local constant signed short pointer. */
static const sint16 * Form_kpss_LocalConstantPointerSignedShort = NULL_PTR;

/** \brief     Example of declaring a local constant signed short array. */
static const sint16 Form_kass_LocalConstantArraySignedShort[FORM_LOCAL_MACRO] =
   { 0 };

/** \brief     Example of declaring a local constant unsigned long. */
static const uint32 Form_kul_LocalConstantUnsignedLong =
   { 0UL };

/** \brief     Example of declaring a local constant unsigned long pointer. */
static const uint32 * Form_kpul_LocalConstantPointerUnsignedLong = NULL_PTR;

/** \brief     Example of declaring a local constant unsigned long array. */
static const uint32 Form_kaul_LocalConstantArrayUnsignedLong[FORM_LOCAL_MACRO] =
   { 0UL };

/** \brief     Example of declaring a local constant signed long. */
static const sint32 Form_ksl_LocalConstantSignedLong =
   { 0L };

/** \brief     Example of declaring a local constant signed long pointer. */
static const sint32 * Form_kpsl_LocalConstantPointerSignedLong = NULL_PTR;

/** \brief     Example of declaring a local constant signed long array. */
static const sint32 Form_kasl_LocalConstantArraySignedLong[FORM_LOCAL_MACRO] =
   { 0L };

/** \brief     Example of declaring a local constant boolean variable. */
static const boolean Form_kb_LocalConstantBoolean = TRUE;

/** \brief     Example of declaring a local constant boolean pointer variable. */
static const boolean * Form_kpb_LocalConstantPointerBoolean = NULL_PTR;

/** \brief     Example of declaring a local constant boolean array. */
static const boolean Form_kab_LocalConstantArrayBoolean[FORM_LOCAL_MACRO] =
   { TRUE };

/** \brief     Example of declaring a local constant custom type. */
static const Form_GlobalStructureType Form_kt_LocalConstantCustomType =
   {
      0U,
      0U,
      NULL_PTR,
      NULL_PTR
   };

/** \brief     Example of declaring a local constant custom type pointer. */
static const Form_GlobalStructureType * Form_kpt_LocalConstantPointerCustomType = NULL_PTR;

/** \brief     Example of declaring a local constant custom type array. */
static const Form_GlobalStructureType Form_kat_LocalConstantArrayCustomType[FORM_LOCAL_MACRO] =
   {
      {
         0U,
         0U,
         NULL_PTR,
         NULL_PTR
      },
   };

/** \brief     Example of declaring a local constant enum type. */
static const Form_GlobalEnumType Form_kt_LocalConstantEnum = FORM_VALUE_0;

/** \brief     Example of declaring a local constant enum pointer. */
static const Form_GlobalEnumType * Form_kpt_LocalConstantPointerEnum = NULL_PTR;

/** \brief     Example of declaring a local constant enum array. */
static const Form_GlobalEnumType Form_at_LocalConstantArrayEnum[FORM_LOCAL_MACRO] =
   { FORM_VALUE_0 };

/** \brief     Example of declaring a local constant function pointer. */
static const Form_GlobalFunctionType * Form_kpf_LocalConstantPointerFunction = NULL_PTR;

/** \brief     Example of declaring a local constant array of function pointers. */
static const Form_GlobalFunctionType * Form_kapf_LocalConstantArrayPointerFunction[FORM_LOCAL_MACRO] =
   { NULL_PTR };

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Declaration Of Global Constants                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Example of declaring a global constant unsigned char. */
const uint8 Form_gkuc_GlobalConstantUnsignedChar;

/** \brief     Example of declaring a global constant unsigned char pointer. */
const uint8 * Form_gkpuc_GlobalConstantPointerUnsignedChar;

/** \brief     Example of declaring a global constant unsigned char array. */
const uint8 Form_gkauc_GlobalConstantArrayUnsignedChar[FORM_GLOBAL_MACRO_LENGTH];

/** \brief     Example of declaring a global constant signed char. */
const sint8 Form_gksc_GlobalConstantSignedChar;

/** \brief     Example of declaring a global constant signed char pointer. */
const sint8 * Form_gkpsc_GlobalConstantPointerSignedChar;

/** \brief     Example of declaring a global constant signed char array. */
const sint8 Form_gkasc_GlobalConstantArraySignedChar[FORM_GLOBAL_MACRO_LENGTH];

/** \brief     Example of declaring a global constant unsigned short. */
const uint16 Form_gkus_GlobalConstantUnsignedShort;

/** \brief     Example of declaring a global constant unsigned short pointer. */
const uint16 * Form_gkpus_GlobalConstantPointerUnsignedShort;

/** \brief     Example of declaring a global constant unsigned short array. */
const uint16 Form_gkaus_GlobalConstantArrayUnsignedShort[FORM_GLOBAL_MACRO_LENGTH];

/** \brief     Example of declaring a global constant signed short. */
const sint16 Form_gkss_GlobalConstantSignedShort;

/** \brief     Example of declaring a global constant signed short pointer. */
const sint16 * Form_gkpss_GlobalConstantPointerSignedShort;

/** \brief     Example of declaring a global constant signed short array. */
const sint16 Form_gkass_GlobalConstantArraySignedShort[FORM_GLOBAL_MACRO_LENGTH];

/** \brief     Example of declaring a global constant unsigned long. */
const uint32 Form_gkul_GlobalConstantUnsignedLong;

/** \brief     Example of declaring a global constant unsigned long pointer. */
const uint32 * Form_gkpul_GlobalConstantPointerUnsignedLong;

/** \brief     Example of declaring a global constant unsigned long array. */
const uint32 Form_gkaul_GlobalConstantArrayUnsignedLong[FORM_GLOBAL_MACRO_LENGTH];

/** \brief     Example of declaring a global constant signed long. */
const sint32 Form_gksl_GlobalConstantSignedLong;

/** \brief     Example of declaring a global constant signed long pointer. */
const sint32 * Form_gkpsl_GlobalConstantPointerSignedLong;

/** \brief     Example of declaring a global constant signed long array. */
const sint32 Form_gkasl_GlobalConstantArraySignedLong[FORM_GLOBAL_MACRO_LENGTH];

/** \brief     Example of declaring a global constant boolean variable. */
const boolean Form_gkb_GlobalConstantBoolean = TRUE;

/** \brief     Example of declaring a global constant boolean pointer variable. */
const boolean * Form_gkpb_GlobalConstantPointerBoolean = NULL_PTR;

/** \brief     Example of declaring a global constant boolean array. */
const boolean Form_gkab_GlobalConstantArrayBoolean[FORM_LOCAL_MACRO] =
   { TRUE };

/** \brief     Example of declaring a global constant custom type. */
const Form_GlobalStructureType Form_gkt_GlobalConstantCustomType;

/** \brief     Example of declaring a global constant custom type pointer. */
const Form_GlobalStructureType * Form_gkpt_GlobalConstantPointerCustomType;

/** \brief     Example of declaring a global constant custom type array. */
const Form_GlobalStructureType Form_gkat_GlobalConstantArrayCustomType[FORM_GLOBAL_MACRO_LENGTH];

/** \brief     Example of declaring a global constant enum type. */
const Form_GlobalEnumType Form_gkt_GlobalConstantEnum;

/** \brief     Example of declaring a global constant enum type pointer. */
const Form_GlobalEnumType * Form_gkpt_GlobalConstantPointerEnum;

/** \brief     Example of declaring a global constant enum type array. */
const Form_GlobalEnumType Form_gkat_GlobalConstantArrayEnum[FORM_GLOBAL_MACRO_LENGTH];

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                           Declaration Of Local Functions                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

static void Form_v_LocalFunctionNoReturn(uint8 uc_Param0, uint8 uc_Param1);
static uint8 Form_uc_LocalFunctionUnsignedCharReturn(uint8 uc_Param);
static uint8 * Form_puc_LocalFunctionPointerUnsignedCharReturn(void);
static sint8 Form_sc_LocalFunctionSignedCharReturn(sint8 sc_Param);
static sint8 * Form_psc_LocalFunctionPointerSignedCharReturn(void);
static uint16 Form_us_LocalFunctionUnsignedShortReturn(uint16 us_Param);
static uint16 * Form_pus_LocalFunctionPointerUnsignedShortReturn(void);
static sint16 Form_ss_LocalFunctionSignedShortReturn(sint16 ss_Param);
static sint16 * Form_pss_LocalFunctionPointerSignedShortReturn(void);
static uint32 Form_ul_LocalFunctionUnsignedLongReturn(uint32 ul_Param);
static uint32 * Form_pul_LocalFunctionPointerUnsignedLongReturn(void);
static sint32 Form_sl_LocalFunctionSignedLongReturn(sint32 sl_Param);
static sint32 * Form_psl_LocalFunctionPointerSignedLongReturn(void);
static boolean Form_b_LocalFunctionBooleanReturn(boolean b_Param);
static boolean * Form_pb_LocalFunctionPointerBooleanReturn(void);
static Form_GlobalStructureType Form_t_LocalFunctionCustomTypeReturn(
   Form_GlobalStructureType t_Param);
static Form_GlobalStructureType * Form_pt_LocalFunctionPointerCustomTypeReturn(void);
static Form_GlobalEnumType Form_t_LocalFunctionEnumReturn(Form_GlobalEnumType t_Param);
static Form_GlobalEnumType * Form_pt_LocalFunctionPointerEnumReturn(void);

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Local Functions                                         */
/*-------------------------------------------------------------------------------------------------------------------*/

/**
 * \brief      Example of local function.
 * \param      uc_Param0 : First parameter description.
 * \param      uc_Param1 : Second parameter description.
 * \return     -
 */
static void Form_v_LocalFunctionNoReturn(uint8 uc_Param0, uint8 uc_Param1)
{
}

/**
 * \brief      Example of local function.
 * \param      uc_Param : Example parameter description.
 * \return     Sum between parameter and local variable.
 */
uint8 Form_uc_LocalFunctionUnsignedCharReturn(uint8 uc_Param)
{
   return (uint8) (uc_Param + Form_uc_LocalVariableUnsignedChar);
}

/**
 * \brief      Example of local function.
 * \param      -
 * \return     Static variable that does nothing since it's just an example.
 */
static uint8 * Form_puc_LocalFunctionPointerUnsignedCharReturn(void)
{
   return Form_puc_LocalVariablePointerUnsignedChar;
}

/**
 * \brief      Example of local function.
 * \param      sc_Param : Example parameter description.
 * \return     Sum between parameter and local variable.
 */
static sint8 Form_sc_LocalFunctionSignedCharReturn(sint8 sc_Param)
{
   return (sint8) (sc_Param + Form_sc_LocalVariableSignedChar);
}

/**
 * \brief      Example of local function.
 * \param      -
 * \return     Static variable that does nothing since it's just an example.
 */
static sint8 * Form_psc_LocalFunctionPointerSignedCharReturn(void)
{
   return Form_psc_LocalVariablePointerSignedChar;
}

/**
 * \brief      Example of local function.
 * \param      us_Param : Example parameter description.
 * \return     Sum between parameter and local variable.
 */
static uint16 Form_us_LocalFunctionUnsignedShortReturn(uint16 us_Param)
{
   return (uint16) (us_Param + Form_us_LocalVariableUnsignedShort);
}

/**
 * \brief      Example of local function.
 * \param      -
 * \return     Static variable that does nothing since it's just an example.
 */
static uint16 * Form_pus_LocalFunctionPointerUnsignedShortReturn(void)
{
   return Form_pus_LocalVariablePointerUnsignedShort;
}

/**
 * \brief      Example of local function.
 * \param      ss_Param : Example parameter description.
 * \return     Sum between parameter and local variable.
 */
static sint16 Form_ss_LocalFunctionSignedShortReturn(sint16 ss_Param)
{
   return (sint16) (ss_Param + Form_ss_LocalVariableSignedShort);
}

/**
 * \brief      Example of local function.
 * \param      -
 * \return     Static variable that does nothing since it's just an example.
 */
static sint16 * Form_pss_LocalFunctionPointerSignedShortReturn(void)
{
   return Form_pss_LocalVariablePointerSignedShort;
}

/**
 * \brief      Example of local function.
 * \param      ul_Param : Example parameter description.
 * \return     Sum between parameter and local variable.
 */
static uint32 Form_ul_LocalFunctionUnsignedLongReturn(uint32 ul_Param)
{
   return (uint32) (ul_Param + Form_ul_LocalVariableUnsignedLong);
}

/**
 * \brief      Example of local function.
 * \param      -
 * \return     Static variable that does nothing since it's just an example.
 */
static uint32 * Form_pul_LocalFunctionPointerUnsignedLongReturn(void)
{
   return Form_pul_LocalVariablePointerUnsignedLong;
}

/**
 * \brief      Example of local function.
 * \param      sl_Param : Example parameter description.
 * \return     Sum between parameter and local variable.
 */
static sint32 Form_sl_LocalFunctionSignedLongReturn(sint32 sl_Param)
{
   return (sint32) (sl_Param + Form_sl_LocalVariableSignedLong);
}

/**
 * \brief      Example of local function.
 * \param      -
 * \return     Static variable that does nothing since it's just an example.
 */
static sint32 * Form_psl_LocalFunctionPointerSignedLongReturn(void)
{
   return Form_psl_LocalVariablePointerSignedLong;
}

/**
 * \brief      Example of local function.
 * \param      b_Param : Example parameter description.
 * \return     Static variable that does nothing since it's just an example.
 */
static boolean Form_b_LocalFunctionBooleanReturn(boolean b_Param)
{
   return Form_b_LocalVariableBoolean;
}

/**
 * \brief      Example of local function.
 * \param      -
 * \return     Static variable that does nothing since it's just an example.
 */
static boolean * Form_pb_LocalFunctionPointerBooleanReturn(void)
{
   return Form_pb_LocalVariablePointerBoolean;
}

/**
 * \brief      Example of local function.
 * \param      t_Param : Example parameter description.
 * \return     Static variable that does nothing since it's just an example.
 */
static Form_GlobalStructureType Form_t_LocalFunctionCustomTypeReturn(
   Form_GlobalStructureType t_Param)
{
   Form_t_LocalVariableCustomType = t_Param;
   return (Form_t_LocalVariableCustomType);
}

/**
 * \brief      Example of local function.
 * \param      -
 * \return     Static variable that does nothing since it's just an example.
 */
static Form_GlobalStructureType * Form_pt_LocalFunctionPointerCustomTypeReturn(void)
{
   return Form_pt_LocalVariablePointerCustomType;
}

/**
 * \brief      Example of local function.
 * \param      t_Param : Example parameter description.
 * \return     Static variable that does nothing since it's just an example.
 */
static Form_GlobalEnumType Form_t_LocalFunctionEnumReturn(Form_GlobalEnumType t_Param)
{
   return (Form_GlobalEnumType) (t_Param + Form_t_LocalVariableEnum);
}

/**
 * \brief      Example of local function.
 * \param      -
 * \return     Static variable that does nothing since it's just an example.
 */
static Form_GlobalEnumType * Form_pt_LocalFunctionPointerEnumReturn(void)
{
   return Form_pt_LocalVariablePointerEnum;
}

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                         Implementation Of Global Functions                                        */
/*-------------------------------------------------------------------------------------------------------------------*/

/**
 * \brief      Example of global function.
 * \param      -
 * \return     -
 */
void Form_gv_GlobalFunctionNoReturn(void)
{
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     -
 */
uint8 Form_guc_GlobalFunctionUnsignedCharReturn(void)
{
   return Form_guc_GlobalVariableUnsignedChar;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
uint8 * Form_gpuc_GlobalFunctionPointerUnsignedCharReturn(void)
{
   return Form_gpuc_GlobalVariablePointerUnsignedChar;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
sint8 Form_gsc_GlobalFunctionSignedCharReturn(void)
{
   return Form_gsc_GlobalVariableSignedChar;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
sint8 * Form_gpsc_GlobalFunctionPointerSignedCharReturn(void)
{
   return Form_gpsc_GlobalVariablePointerSignedChar;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
uint16 Form_gus_GlobalFunctionUnsignedShortReturn(void)
{
   return Form_gus_GlobalVariableUnsignedShort;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
uint16 * Form_gpus_GlobalFunctionPointerUnsignedShortReturn(void)
{
   return Form_gpus_GlobalVariablePointerUnsignedShort;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
sint16 Form_gss_GlobalFunctionSignedShortReturn(void)
{
   return Form_gss_GlobalVariableSignedShort;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
sint16 * Form_gpss_GlobalFunctionPointerSignedShortReturn(void)
{
   return Form_gpss_GlobalVariablePointerSignedShort;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
uint32 Form_gul_GlobalFunctionUnsignedLongReturn(void)
{
   return Form_gul_GlobalVariableUnsignedLong;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
uint32 * Form_gpul_GlobalFunctionPointerUnsignedLongReturn(void)
{
   return Form_gpul_GlobalVariablePointerUnsignedLong;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
sint32 Form_gsl_GlobalFunctionSignedLongReturn(void)
{
   return Form_gsl_GlobalVariableSignedLong;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
sint32 * Form_gpsl_GlobalFunctionPointerSignedLongReturn(void)
{
   return Form_gpsl_GlobalVariablePointerSignedLong;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
boolean Form_gb_GlobalFunctionBooleanReturn(void)
{
   return Form_gb_GlobalVariableBoolean;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
boolean * Form_gpb_GlobalFunctionPointerBooleanReturn(void)
{
   return Form_gpb_GlobalVariablePointerBoolean;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
Form_GlobalStructureType Form_gt_GlobalFunctionCustomTypeReturn(void)
{
   return Form_gt_GlobalVariableCustomType;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
Form_GlobalStructureType * Form_gpt_GlobalFunctionPointerCustomTypeReturn(void)
{
   return Form_gpt_GlobalVariablePointerCustomType;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
Form_GlobalEnumType Form_gt_GlobalFunctionEnumReturn(void)
{
   return Form_gt_GlobalVariableEnum;
}

/**
 * \brief      Example of global function.
 * \param      -
 * \return     Global variable that does nothing since it's just an example.
 */
Form_GlobalEnumType * Form_gpt_GlobalFunctionPointerEnumReturn(void)
{
   return Form_gpt_GlobalVariablePointerEnum;
}
