/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Form_NamingHeader.h
 *    \author     Nicolae-Bogdan Bacrau
 *    \brief      Example for using the .h file template. The brief should be kept as short as possible (maximum of
 *                three lines, with respect to the given format and without passing over the 120 characters per line),
 *                and only general information should be provided in this section.
 *
 *    Example detailed description of the template header. This paragraph has the purpose of providing details that
 *    cannot be integrated in the brief description, since it would take too much space.
 *    This section is not mandatory and shall be used only when a brief description of the file is not enough. In case
 *    this section is not needed then the line containing the end of comment '*'/ shall be the only line between the
 *    last line of the brief and the border, like in the Empty_Header.h file.
 *    The limit of 120 characters per line applies to all comments and it is also included in the formatter.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef FORM_NAMINGHEADER_H
#define FORM_NAMINGHEADER_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

#include "Std_Types.h"

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Example of an macro defining the lengths of the exported arrays. */
#define FORM_GLOBAL_MACRO_LENGTH (1U)

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/** \brief     Example of an exported simple data type. */
typedef uint8 Form_GlobalSimpleType;

/** \brief     Example of an exported function type. */
typedef void (Form_GlobalFunctionType)(void);

/** \brief     Example of an exported structure data type. */
typedef struct
{
   /** \brief     First member of the example structure type. */
   uint8 uc_UnsignedChar;

   /** \brief     Second member of the example structure type. */
   Form_GlobalSimpleType t_CustomSimple;

   /** \brief     Third member of the example structure type. */
   Form_GlobalSimpleType * pt_PointerCustomSimple;

   /** \brief     Fourth member of the example structure type. */
   Form_GlobalFunctionType * pf_PointerFunction;
} Form_GlobalStructureType;

/** \brief     Defines all the possible values of an enumeration type. */
typedef enum
{
   /** \brief     The first value of the enumeration. */
   FORM_VALUE_0,
   /** \brief     The second value of the enumeration. */
   FORM_VALUE_1,
   /** \brief     The third value of the enumeration. */
   FORM_VALUE_2,
   /** \brief     The fourth value of the enumeration. */
   FORM_VALUE_3,
} Form_GlobalEnumType;

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Variables                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

extern uint8 Form_guc_GlobalVariableUnsignedChar;
extern uint8 * Form_gpuc_GlobalVariablePointerUnsignedChar;
extern uint8 Form_gauc_GlobalVariableArrayUnsignedChar[FORM_GLOBAL_MACRO_LENGTH];
extern sint8 Form_gsc_GlobalVariableSignedChar;
extern sint8 * Form_gpsc_GlobalVariablePointerSignedChar;
extern sint8 Form_gasc_GlobalVariableArraySignedChar[FORM_GLOBAL_MACRO_LENGTH];
extern uint16 Form_gus_GlobalVariableUnsignedShort;
extern uint16 * Form_gpus_GlobalVariablePointerUnsignedShort;
extern uint16 Form_gaus_GlobalVariableArrayUnsignedShort[FORM_GLOBAL_MACRO_LENGTH];
extern sint16 Form_gss_GlobalVariableSignedShort;
extern sint16 * Form_gpss_GlobalVariablePointerSignedShort;
extern sint16 Form_gass_GlobalVariableArraySignedShort[FORM_GLOBAL_MACRO_LENGTH];
extern uint32 Form_gul_GlobalVariableUnsignedLong;
extern uint32 * Form_gpul_GlobalVariablePointerUnsignedLong;
extern uint32 Form_gaul_GlobalVariableArrayUnsignedLong[FORM_GLOBAL_MACRO_LENGTH];
extern sint32 Form_gsl_GlobalVariableSignedLong;
extern sint32 * Form_gpsl_GlobalVariablePointerSignedLong;
extern sint32 Form_gasl_GlobalVariableArraySignedLong[FORM_GLOBAL_MACRO_LENGTH];
extern boolean Form_gb_GlobalVariableBoolean;
extern boolean * Form_gpb_GlobalVariablePointerBoolean;
extern boolean Form_gab_GlobalVariableArrayBoolean[FORM_GLOBAL_MACRO_LENGTH];
extern Form_GlobalStructureType Form_gt_GlobalVariableCustomType;
extern Form_GlobalStructureType * Form_gpt_GlobalVariablePointerCustomType;
extern Form_GlobalStructureType Form_gat_GlobalVariableArrayCustomType[FORM_GLOBAL_MACRO_LENGTH];
extern Form_GlobalEnumType Form_gt_GlobalVariableEnum;
extern Form_GlobalEnumType * Form_gpt_GlobalVariablePointerEnum;
extern Form_GlobalEnumType Form_gat_GlobalVariableArrayEnum[FORM_GLOBAL_MACRO_LENGTH];

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Constants                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

extern const uint8 Form_gkuc_GlobalConstantUnsignedChar;
extern const uint8 * Form_gkpuc_GlobalConstantPointerUnsignedChar;
extern const uint8 Form_gkauc_GlobalConstantArrayUnsignedChar[FORM_GLOBAL_MACRO_LENGTH];
extern const sint8 Form_gksc_GlobalConstantSignedChar;
extern const sint8 * Form_gkpsc_GlobalConstantPointerSignedChar;
extern const sint8 Form_gkasc_GlobalConstantArraySignedChar[FORM_GLOBAL_MACRO_LENGTH];
extern const uint16 Form_gkus_GlobalConstantUnsignedShort;
extern const uint16 * Form_gkpus_GlobalConstantPointerUnsignedShort;
extern const uint16 Form_gkaus_GlobalConstantArrayUnsignedShort[FORM_GLOBAL_MACRO_LENGTH];
extern const sint16 Form_gkss_GlobalConstantSignedShort;
extern const sint16 * Form_gkpss_GlobalConstantPointerSignedShort;
extern const sint16 Form_gkass_GlobalConstantArraySignedShort[FORM_GLOBAL_MACRO_LENGTH];
extern const uint32 Form_gkul_GlobalConstantUnsignedLong;
extern const uint32 * Form_gkpul_GlobalConstantPointerUnsignedLong;
extern const uint32 Form_gkaul_GlobalConstantArrayUnsignedLong[FORM_GLOBAL_MACRO_LENGTH];
extern const sint32 Form_gksl_GlobalConstantSignedLong;
extern const sint32 * Form_gkpsl_GlobalConstantPointerSignedLong;
extern const sint32 Form_gkasl_GlobalConstantArraySignedLong[FORM_GLOBAL_MACRO_LENGTH];
extern const boolean Form_gkb_GlobalConstantBoolean;
extern const boolean * Form_gkpb_GlobalConstantPointerBoolean;
extern const boolean Form_gkab_GlobalConstantArrayBoolean[FORM_GLOBAL_MACRO_LENGTH];
extern const Form_GlobalStructureType Form_gkt_GlobalConstantCustomType;
extern const Form_GlobalStructureType * Form_gkpt_GlobalConstantPointerCustomType;
extern const Form_GlobalStructureType Form_gkat_GlobalConstantArrayCustomType[FORM_GLOBAL_MACRO_LENGTH];
extern const Form_GlobalEnumType Form_gkt_GlobalConstantEnum;
extern const Form_GlobalEnumType * Form_gkpt_GlobalConstantPointerEnum;
extern const Form_GlobalEnumType Form_gkat_GlobalConstantArrayEnum[FORM_GLOBAL_MACRO_LENGTH];

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Functions                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

extern void Form_gv_GlobalFunctionNoReturn(void);
extern uint8 Form_guc_GlobalFunctionUnsignedCharReturn(void);
extern uint8 * Form_gpuc_GlobalFunctionPointerUnsignedCharReturn(void);
extern sint8 Form_gsc_GlobalFunctionSignedCharReturn(void);
extern sint8 * Form_gpsc_GlobalFunctionPointerSignedCharReturn(void);
extern uint16 Form_gus_GlobalFunctionUnsignedShortReturn(void);
extern uint16 * Form_gpus_GlobalFunctionPointerUnsignedShortReturn(void);
extern sint16 Form_gss_GlobalFunctionSignedShortReturn(void);
extern sint16 * Form_gpss_GlobalFunctionPointerSignedShortReturn(void);
extern uint32 Form_gul_GlobalFunctionUnsignedLongReturn(void);
extern uint32 * Form_gpul_GlobalFunctionPointerUnsignedLongReturn(void);
extern sint32 Form_gsl_GlobalFunctionSignedLongReturn(void);
extern sint32 * Form_gpsl_GlobalFunctionPointerSignedLongReturn(void);
extern boolean Form_gb_GlobalFunctionBooleanReturn(void);
extern boolean * Form_gpb_GlobalFunctionPointerBooleanReturn(void);
extern Form_GlobalStructureType Form_gt_GlobalFunctionCustomTypeReturn(void);
extern Form_GlobalStructureType * Form_gpt_GlobalFunctionPointerCustomTypeReturn(void);
extern Form_GlobalEnumType Form_gt_GlobalFunctionEnumReturn(void);
extern Form_GlobalEnumType * Form_gpt_GlobalFunctionPointerEnumReturn(void);

/*-------------------------------------------------------------------------------------------------------------------*/
#endif /* FORM_NAMINGHEADER_H */
