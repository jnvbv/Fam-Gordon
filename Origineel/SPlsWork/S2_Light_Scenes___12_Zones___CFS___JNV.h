#ifndef __S2_LIGHT_SCENES___12_ZONES___CFS___JNV_H__
#define __S2_LIGHT_SCENES___12_ZONES___CFS___JNV_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Light_Scenes___12_Zones___CFS___JNV_FILE_LOAD_DIG_INPUT 0
#define __S2_Light_Scenes___12_Zones___CFS___JNV_FILE_SAVE_DIG_INPUT 1
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ALL_TOGGLE_DIG_INPUT 2
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ALL_ON_DIG_INPUT 3
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ALL_OFF_DIG_INPUT 4

#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_TOGGLE_DIG_INPUT 5
#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_TOGGLE_ARRAY_LENGTH 8
#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_ON_DIG_INPUT 13
#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_ON_ARRAY_LENGTH 8
#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_OFF_DIG_INPUT 21
#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_OFF_ARRAY_LENGTH 8
#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_STORE_DIG_INPUT 29
#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_STORE_ARRAY_LENGTH 8
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_TOGGLE_DIG_INPUT 37
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_TOGGLE_ARRAY_LENGTH 12
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_ON_DIG_INPUT 49
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_ON_ARRAY_LENGTH 12
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_OFF_DIG_INPUT 61
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_OFF_ARRAY_LENGTH 12
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_ON_STORE_DIG_INPUT 73
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_ON_STORE_ARRAY_LENGTH 12

/*
* ANALOG_INPUT
*/



#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_LEVEL_IN_ANALOG_INPUT 0
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_LEVEL_IN_ARRAY_LENGTH 12
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_NAME$_STRING_INPUT 12
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_NAME$_ARRAY_NUM_ELEMS 12
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_NAME$_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_Light_Scenes___12_Zones___CFS___JNV, __ZONE_NAME$, __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_NAME$_ARRAY_NUM_ELEMS, __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_NAME$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ALL_ON_FB_DIG_OUTPUT 0
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ALL_OFF_FB_DIG_OUTPUT 1

#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_FB_DIG_OUTPUT 2
#define __S2_Light_Scenes___12_Zones___CFS___JNV_SCENE_FB_ARRAY_LENGTH 8
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_ON_FB_DIG_OUTPUT 10
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_ON_FB_ARRAY_LENGTH 12
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_OFF_FB_DIG_OUTPUT 22
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_OFF_FB_ARRAY_LENGTH 12
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_RAMP_FB_DIG_OUTPUT 34
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_RAMP_FB_ARRAY_LENGTH 12
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_NOT_USED_DIG_OUTPUT 46
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_NOT_USED_ARRAY_LENGTH 12

/*
* ANALOG_OUTPUT
*/


#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_LEVEL_OUT_ANALOG_OUTPUT 0
#define __S2_Light_Scenes___12_Zones___CFS___JNV_ZONE_LEVEL_OUT_ARRAY_LENGTH 12

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Light_Scenes___12_Zones___CFS___JNV_DELTA_LEVEL_INTEGER_PARAMETER 11
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
#define __S2_Light_Scenes___12_Zones___CFS___JNV_FILE_NAME$_STRING_PARAMETER 10
#define __S2_Light_Scenes___12_Zones___CFS___JNV_FILE_NAME$_PARAM_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Light_Scenes___12_Zones___CFS___JNV, __FILE_NAME$, __S2_Light_Scenes___12_Zones___CFS___JNV_FILE_NAME$_PARAM_MAX_LEN );


/*
* INTEGER
*/
CREATE_INTARRAY1D( S2_Light_Scenes___12_Zones___CFS___JNV, __ZONE_CURRENT_LEVEL, 12 );;
CREATE_INTARRAY1D( S2_Light_Scenes___12_Zones___CFS___JNV, __ZONE_ON_LEVEL, 12 );;

CREATE_INTARRAY2D( S2_Light_Scenes___12_Zones___CFS___JNV, __SCENE_ZONE_LEVEL, 8, 12 );;

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

START_GLOBAL_VAR_STRUCT( S2_Light_Scenes___12_Zones___CFS___JNV )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SCENE_TOGGLE );
   DECLARE_IO_ARRAY( __SCENE_ON );
   DECLARE_IO_ARRAY( __SCENE_OFF );
   DECLARE_IO_ARRAY( __SCENE_STORE );
   DECLARE_IO_ARRAY( __ZONE_TOGGLE );
   DECLARE_IO_ARRAY( __ZONE_ON );
   DECLARE_IO_ARRAY( __ZONE_OFF );
   DECLARE_IO_ARRAY( __ZONE_ON_STORE );
   DECLARE_IO_ARRAY( __SCENE_FB );
   DECLARE_IO_ARRAY( __ZONE_ON_FB );
   DECLARE_IO_ARRAY( __ZONE_OFF_FB );
   DECLARE_IO_ARRAY( __ZONE_RAMP_FB );
   DECLARE_IO_ARRAY( __ZONE_NOT_USED );
   DECLARE_IO_ARRAY( __ZONE_LEVEL_IN );
   DECLARE_IO_ARRAY( __ZONE_LEVEL_OUT );
   DECLARE_STRING_ARRAY( S2_Light_Scenes___12_Zones___CFS___JNV, __ZONE_NAME$ );
   DECLARE_STRING_STRUCT( S2_Light_Scenes___12_Zones___CFS___JNV, __FILE_NAME$ );
};

START_NVRAM_VAR_STRUCT( S2_Light_Scenes___12_Zones___CFS___JNV )
{
   unsigned short __INITIALIZED;
   DECLARE_INTARRAY( S2_Light_Scenes___12_Zones___CFS___JNV, __ZONE_CURRENT_LEVEL );
   DECLARE_INTARRAY( S2_Light_Scenes___12_Zones___CFS___JNV, __ZONE_ON_LEVEL );
   DECLARE_INTARRAY( S2_Light_Scenes___12_Zones___CFS___JNV, __SCENE_ZONE_LEVEL );
};



#endif //__S2_LIGHT_SCENES___12_ZONES___CFS___JNV_H__

