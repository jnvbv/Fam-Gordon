#ifndef __S2_SELECTION_MANAGER___JNV_H__
#define __S2_SELECTION_MANAGER___JNV_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Selection_Manager___JNV_ENABLE_DIG_INPUT 0
#define __S2_Selection_Manager___JNV_PAGE_START_DIG_INPUT 1
#define __S2_Selection_Manager___JNV_PAGE_UP_DIG_INPUT 2
#define __S2_Selection_Manager___JNV_PAGE_DOWN_DIG_INPUT 3

#define __S2_Selection_Manager___JNV_ITEM_SELECT_DIG_INPUT 4
#define __S2_Selection_Manager___JNV_ITEM_SELECT_ARRAY_LENGTH 16
#define __S2_Selection_Manager___JNV_SEL_ENABLE_DIG_INPUT 20
#define __S2_Selection_Manager___JNV_SEL_ENABLE_ARRAY_LENGTH 24
#define __S2_Selection_Manager___JNV_SEL_SELECT_DIG_INPUT 44
#define __S2_Selection_Manager___JNV_SEL_SELECT_ARRAY_LENGTH 24

/*
* ANALOG_INPUT
*/
#define __S2_Selection_Manager___JNV_ITEMS_PER_PAGE_ANALOG_INPUT 0



#define __S2_Selection_Manager___JNV_VALUES_ANALOG_INPUT 1
#define __S2_Selection_Manager___JNV_VALUES_ARRAY_LENGTH 24
#define __S2_Selection_Manager___JNV_TEXTS$_STRING_INPUT 25
#define __S2_Selection_Manager___JNV_TEXTS$_ARRAY_NUM_ELEMS 24
#define __S2_Selection_Manager___JNV_TEXTS$_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_Selection_Manager___JNV, __TEXTS$, __S2_Selection_Manager___JNV_TEXTS$_ARRAY_NUM_ELEMS, __S2_Selection_Manager___JNV_TEXTS$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_Selection_Manager___JNV_PAGE_UP_AVAILABLE_DIG_OUTPUT 0
#define __S2_Selection_Manager___JNV_PAGE_DOWN_AVAILABLE_DIG_OUTPUT 1

#define __S2_Selection_Manager___JNV_SEL_PULSE_DIG_OUTPUT 2
#define __S2_Selection_Manager___JNV_SEL_PULSE_ARRAY_LENGTH 24

/*
* ANALOG_OUTPUT
*/
#define __S2_Selection_Manager___JNV_SEL_VALUE_ANALOG_OUTPUT 0

#define __S2_Selection_Manager___JNV_SEL_TEXT$_STRING_OUTPUT 1

#define __S2_Selection_Manager___JNV_ITEM_VALUE_ANALOG_OUTPUT 2
#define __S2_Selection_Manager___JNV_ITEM_VALUE_ARRAY_LENGTH 16
#define __S2_Selection_Manager___JNV_ITEM_TEXT$_STRING_OUTPUT 18
#define __S2_Selection_Manager___JNV_ITEM_TEXT$_ARRAY_LENGTH 16

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/
CREATE_INTARRAY1D( S2_Selection_Manager___JNV, __SEL_ENABLED_NUMBER, 24 );;


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Selection_Manager___JNV )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ITEM_SELECT );
   DECLARE_IO_ARRAY( __SEL_ENABLE );
   DECLARE_IO_ARRAY( __SEL_SELECT );
   DECLARE_IO_ARRAY( __SEL_PULSE );
   DECLARE_IO_ARRAY( __VALUES );
   DECLARE_IO_ARRAY( __ITEM_VALUE );
   DECLARE_IO_ARRAY( __ITEM_TEXT$ );
   DECLARE_STRING_ARRAY( S2_Selection_Manager___JNV, __TEXTS$ );
};

START_NVRAM_VAR_STRUCT( S2_Selection_Manager___JNV )
{
   unsigned short __CURRENT_PAGE;
   unsigned short __MAX_PAGE_NR;
   unsigned short __CURRENT_SELECTION;
   unsigned short __NR_OF_SEL;
   unsigned short __SEL_ENABLE_UPDATING_BUSY;
   DECLARE_INTARRAY( S2_Selection_Manager___JNV, __SEL_ENABLED_NUMBER );
};

DEFINE_WAITEVENT( S2_Selection_Manager___JNV, __SPLS_TMPVAR__WAITLABEL_0__ );


#endif //__S2_SELECTION_MANAGER___JNV_H__

