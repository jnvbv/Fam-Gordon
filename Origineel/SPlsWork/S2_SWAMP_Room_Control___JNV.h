#ifndef __S2_SWAMP_ROOM_CONTROL___JNV_H__
#define __S2_SWAMP_ROOM_CONTROL___JNV_H__



/*
* STRUCTURE S2_SWAMP_Room_Control___JNV__STRUCT_ROOM
*/
START_STRUCTURE_DEFINITION( S2_SWAMP_Room_Control___JNV, STRUCT_ROOM )
{
   unsigned short STRUCT_ROOM__AMP;
   unsigned short STRUCT_ROOM__MUTE;
   unsigned short STRUCT_ROOM__MONO;
   unsigned short STRUCT_ROOM__LOUDNESS;
   unsigned short STRUCT_ROOM__VOL;
   unsigned short STRUCT_ROOM__SOURCE;
   short STRUCT_ROOM__BASS;
   short STRUCT_ROOM__TREBLE;
   short STRUCT_ROOM__BALANCE;
};


/*
* Constructor and Destructor
*/
int S2_SWAMP_Room_Control___JNV_STRUCT_ROOM_Constructor ( START_STRUCTURE_DEFINITION( S2_SWAMP_Room_Control___JNV, STRUCT_ROOM ) * me, int nVerbose );
int S2_SWAMP_Room_Control___JNV_STRUCT_ROOM_Destructor ( START_STRUCTURE_DEFINITION( S2_SWAMP_Room_Control___JNV, STRUCT_ROOM ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_SWAMP_Room_Control___JNV_INIT_DIG_INPUT 0
#define __S2_SWAMP_Room_Control___JNV_NORM_DIG_INPUT 1
#define __S2_SWAMP_Room_Control___JNV_AMP_DIG_INPUT 2
#define __S2_SWAMP_Room_Control___JNV_AMP_ON_DIG_INPUT 3
#define __S2_SWAMP_Room_Control___JNV_AMP_OFF_DIG_INPUT 4
#define __S2_SWAMP_Room_Control___JNV_MUTE_DIG_INPUT 5
#define __S2_SWAMP_Room_Control___JNV_MUTE_ON_DIG_INPUT 6
#define __S2_SWAMP_Room_Control___JNV_MUTE_OFF_DIG_INPUT 7
#define __S2_SWAMP_Room_Control___JNV_MONO_DIG_INPUT 8
#define __S2_SWAMP_Room_Control___JNV_MONO_ON_DIG_INPUT 9
#define __S2_SWAMP_Room_Control___JNV_MONO_OFF_DIG_INPUT 10
#define __S2_SWAMP_Room_Control___JNV_LOUDNESS_DIG_INPUT 11
#define __S2_SWAMP_Room_Control___JNV_LOUDNESS_ON_DIG_INPUT 12
#define __S2_SWAMP_Room_Control___JNV_LOUDNESS_OFF_DIG_INPUT 13
#define __S2_SWAMP_Room_Control___JNV_VOL_UP_DIG_INPUT 14
#define __S2_SWAMP_Room_Control___JNV_VOL_DOWN_DIG_INPUT 15
#define __S2_SWAMP_Room_Control___JNV_BASS_UP_DIG_INPUT 16
#define __S2_SWAMP_Room_Control___JNV_BASS_DOWN_DIG_INPUT 17
#define __S2_SWAMP_Room_Control___JNV_TREBLE_UP_DIG_INPUT 18
#define __S2_SWAMP_Room_Control___JNV_TREBLE_DOWN_DIG_INPUT 19
#define __S2_SWAMP_Room_Control___JNV_BALANCE_UP_DIG_INPUT 20
#define __S2_SWAMP_Room_Control___JNV_BALANCE_DOWN_DIG_INPUT 21
#define __S2_SWAMP_Room_Control___JNV_SOURCE_NONE_DIG_INPUT 22

#define __S2_SWAMP_Room_Control___JNV_SOURCE_DIG_INPUT 23
#define __S2_SWAMP_Room_Control___JNV_SOURCE_ARRAY_LENGTH 24

/*
* ANALOG_INPUT
*/
#define __S2_SWAMP_Room_Control___JNV_VOL_ANALOG_INPUT 0
#define __S2_SWAMP_Room_Control___JNV_BASS_ANALOG_INPUT 1
#define __S2_SWAMP_Room_Control___JNV_TREBLE_ANALOG_INPUT 2
#define __S2_SWAMP_Room_Control___JNV_BALANCE_ANALOG_INPUT 3
#define __S2_SWAMP_Room_Control___JNV_SOURCE_ANA_ANALOG_INPUT 4
#define __S2_SWAMP_Room_Control___JNV_STARTUP_VOL_ANALOG_INPUT 5




/*
* DIGITAL_OUTPUT
*/
#define __S2_SWAMP_Room_Control___JNV_AMP_ON_FB_DIG_OUTPUT 0
#define __S2_SWAMP_Room_Control___JNV_AMP_OFF_FB_DIG_OUTPUT 1
#define __S2_SWAMP_Room_Control___JNV_MUTE_ON_FB_DIG_OUTPUT 2
#define __S2_SWAMP_Room_Control___JNV_MUTE_OFF_FB_DIG_OUTPUT 3
#define __S2_SWAMP_Room_Control___JNV_MONO_ON_FB_DIG_OUTPUT 4
#define __S2_SWAMP_Room_Control___JNV_MONO_OFF_FB_DIG_OUTPUT 5
#define __S2_SWAMP_Room_Control___JNV_LOUDNESS_ON_FB_DIG_OUTPUT 6
#define __S2_SWAMP_Room_Control___JNV_LOUDNESS_OFF_FB_DIG_OUTPUT 7
#define __S2_SWAMP_Room_Control___JNV_SOURCE_NONE_FB_DIG_OUTPUT 8

#define __S2_SWAMP_Room_Control___JNV_SOURCE_FB_DIG_OUTPUT 9
#define __S2_SWAMP_Room_Control___JNV_SOURCE_FB_ARRAY_LENGTH 24

/*
* ANALOG_OUTPUT
*/
#define __S2_SWAMP_Room_Control___JNV_VOL_FB_ANALOG_OUTPUT 0
#define __S2_SWAMP_Room_Control___JNV_BASS_FB_ANALOG_OUTPUT 1
#define __S2_SWAMP_Room_Control___JNV_TREBLE_FB_ANALOG_OUTPUT 2
#define __S2_SWAMP_Room_Control___JNV_BALANCE_FB_ANALOG_OUTPUT 3
#define __S2_SWAMP_Room_Control___JNV_SOURCE_ANA_FB_ANALOG_OUTPUT 4



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

START_GLOBAL_VAR_STRUCT( S2_SWAMP_Room_Control___JNV )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SOURCE );
   DECLARE_IO_ARRAY( __SOURCE_FB );
};

START_NVRAM_VAR_STRUCT( S2_SWAMP_Room_Control___JNV )
{
   unsigned short __VALIDATED;
   unsigned short __LAST_SOURCE;
   DECLARE_STRUCT( S2_SWAMP_Room_Control___JNV, STRUCT_ROOM, __ROOM );
};



#endif //__S2_SWAMP_ROOM_CONTROL___JNV_H__

