#ifndef __S2_ILOCK_NON_VOLATILE_SMALL___JNV_H__
#define __S2_ILOCK_NON_VOLATILE_SMALL___JNV_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Ilock_Non_Volatile_Small___JNV_CLEAR_DIG_INPUT 0
#define __S2_Ilock_Non_Volatile_Small___JNV_SET_ALL_DIG_INPUT 1

#define __S2_Ilock_Non_Volatile_Small___JNV_I_DIG_INPUT 2
#define __S2_Ilock_Non_Volatile_Small___JNV_I_ARRAY_LENGTH 4

/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/

#define __S2_Ilock_Non_Volatile_Small___JNV_O_DIG_OUTPUT 0
#define __S2_Ilock_Non_Volatile_Small___JNV_O_ARRAY_LENGTH 4

/*
* ANALOG_OUTPUT
*/



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
CREATE_INTARRAY1D( S2_Ilock_Non_Volatile_Small___JNV, __MEM, 4 );;


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

START_GLOBAL_VAR_STRUCT( S2_Ilock_Non_Volatile_Small___JNV )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __I );
   DECLARE_IO_ARRAY( __O );
};

START_NVRAM_VAR_STRUCT( S2_Ilock_Non_Volatile_Small___JNV )
{
   DECLARE_INTARRAY( S2_Ilock_Non_Volatile_Small___JNV, __MEM );
};



#endif //__S2_ILOCK_NON_VOLATILE_SMALL___JNV_H__

