#ifndef __LINUX__XIAOMI__TOUCH_H
#define __LINUX__XIAOMI__TOUCH_H

#include <linux/types.h>
#include <asm/ioctl.h>

#define MAX_BUF_SIZE 256
#define MAX_TOUCH_ID 10
#define THP_CMD_BASE 1000

enum MODE_CMD {
	SET_CUR_VALUE = 0,
	GET_CUR_VALUE,
	GET_DEF_VALUE,
	GET_MIN_VALUE,
	GET_MAX_VALUE,
	GET_MODE_VALUE,
	RESET_MODE,
	SET_LONG_VALUE,
};

enum MODE_TYPE {
	Touch_Game_Mode				= 0,
	Touch_Active_MODE      		= 1,
	Touch_UP_THRESHOLD			= 2,
	Touch_Tolerance				= 3,
	Touch_Aim_Sensitivity       = 4,
	Touch_Tap_Stability         = 5,
	Touch_Expert_Mode           = 6,
	Touch_Edge_Filter      		= 7,
	Touch_Panel_Orientation 	= 8,
	Touch_Report_Rate      		= 9,
	Touch_Fod_Enable       		= 10,
	Touch_Aod_Enable       		= 11,
	Touch_Resist_RF        		= 12,
	Touch_Idle_Time        		= 13,
	Touch_Doubletap_Mode   		= 14,
	Touch_Grip_Mode        		= 15,
	Touch_FodIcon_Enable   		= 16,
	Touch_Nonui_Mode       		= 17,
	Touch_Debug_Level      		= 18,
	Touch_Power_Status     		= 19,
	Touch_Singletap_Gesture,
	Touch_Mode_NUM,
	THP_LOCK_SCAN_MODE      	= THP_CMD_BASE + 0,
};

#define TOUCH_MAGIC 'T'
#define TOUCH_IOC_SET_CUR_VALUE _IO(TOUCH_MAGIC, SET_CUR_VALUE)
#define TOUCH_IOC_GET_CUR_VALUE _IO(TOUCH_MAGIC, GET_CUR_VALUE)

#endif
