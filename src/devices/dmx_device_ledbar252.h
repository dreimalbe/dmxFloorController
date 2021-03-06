/*
 * dmx_device_ledbar252.h
 *
 * Device definitions for Stairville RGB-Bar 252.
 *
 * Author: @dreimalbe
 */
#ifndef DMX_DEVICE_LEDBAR252_H
#define DMX_DEVICE_LEDBAR252_H

#include <avr/io.h>
#include <stdio.h>
#include <string.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include "../dmx_controller.h"

/* Farbdefinitionen******************************/
#define DMX_252_COLOR_RED100		255,   0,   0
#define DMX_252_COLOR_RED80			179,   0,   0
#define DMX_252_COLOR_RED70			160,   0,   0
#define DMX_252_COLOR_RED60			120,   0,   0
#define DMX_252_COLOR_RED50			100,   0,   0
#define DMX_252_COLOR_RED40	         80,   0,   0
#define DMX_252_COLOR_RED30			 60,   0,   0

#define DMX_252_COLOR_ORANGE100		210,  50,	0
#define DMX_252_COLOR_ORANGE80		147,  35,   0
#define DMX_252_COLOR_ORANGE70		120,  30,   0
#define DMX_252_COLOR_ORANGE60		110,  27,   0
#define DMX_252_COLOR_ORANGE50		105,  25,   0
#define DMX_252_COLOR_ORANGE40		 82,  22,   0
#define DMX_252_COLOR_ORANGE30		 65,  18,   0

#define DMX_252_COLOR_BLUE100		  0,  13,  90
#define DMX_252_COLOR_BLUE80		  0,  10,  70
#define DMX_252_COLOR_BLUE70		  0,   9,  55
#define DMX_252_COLOR_BLUE60		  0,   8,  50
#define DMX_252_COLOR_BLUE50		  0,   7,  40
#define DMX_252_COLOR_BLUE40		  0,   6,  35
#define DMX_252_COLOR_BLUE30		  0,   5,  30

#define DMX_252_COLOR_TEAL100		  0, 190,  85
#define DMX_252_COLOR_TEAL80		  0, 130,  60
#define DMX_252_COLOR_TEAL70		  0, 120,  55
#define DMX_252_COLOR_TEAL60		  0, 110,  50
#define DMX_252_COLOR_TEAL50		  0,  95,  45
#define DMX_252_COLOR_TEAL40		  0,  90,  40
#define DMX_252_COLOR_TEAL30		  0,  80,  35

#define DMX_252_COLOR_FULL100		255, 255, 255
#define DMX_252_COLOR_FULL80		204, 204, 204
#define DMX_252_COLOR_FULL70		179, 179, 179
#define DMX_252_COLOR_FULL60		153, 153, 153
#define DMX_252_COLOR_FULL50		128, 179, 128
#define DMX_252_COLOR_FULL40		102, 102, 102
#define DMX_252_COLOR_FULL30		 90,  90,  90

#define DMX_252_COLOR_WHITE100		255, 175, 170
#define DMX_252_COLOR_WHITE80		179, 123, 119
#define DMX_252_COLOR_WHITE70		165, 105, 100
#define DMX_252_COLOR_WHITE60		150,  97,  90
#define DMX_252_COLOR_WHITE50		128,  87,  85
#define DMX_252_COLOR_WHITE40		105,  80,  70
#define DMX_252_COLOR_WHITE30		 88,  65,  60

#define DMX_252_COLOR_BLACK			  0,   0,   0
#define DMX_252_COLOR_UNUSED		  0,   0,   0

/* Intesitätseinstellungen **********************/
#if INTESITY_BASE == 100
#define DMX_252_COLOR_RED 		DMX_252_COLOR_RED100
#define DMX_252_COLOR_ORANGE 	DMX_252_COLOR_ORANGE100
#define DMX_252_COLOR_BLUE		DMX_252_COLOR_BLUE100
#define DMX_252_COLOR_TEAL		DMX_252_COLOR_TEAL100
#define DMX_252_COLOR_WHITE		DMX_252_COLOR_WHITE100
#endif

#if INTESITY_BASE == 80
#define DMX_252_COLOR_RED 		DMX_252_COLOR_RED80
#define DMX_252_COLOR_ORANGE 	DMX_252_COLOR_ORANGE80
#define DMX_252_COLOR_BLUE		DMX_252_COLOR_BLUE80
#define DMX_252_COLOR_TEAL		DMX_252_COLOR_TEAL80
#define DMX_252_COLOR_WHITE		DMX_252_COLOR_WHITE80
#endif

#if INTESITY_BASE == 70
#define DMX_252_COLOR_RED 		DMX_252_COLOR_RED70
#define DMX_252_COLOR_ORANGE 	DMX_252_COLOR_ORANGE70
#define DMX_252_COLOR_BLUE		DMX_252_COLOR_BLUE70
#define DMX_252_COLOR_TEAL		DMX_252_COLOR_TEAL70
#define DMX_252_COLOR_WHITE		DMX_252_COLOR_WHITE70
#endif

#if INTESITY_BASE == 60
#define DMX_252_COLOR_RED 		DMX_252_COLOR_RED60
#define DMX_252_COLOR_ORANGE 	DMX_252_COLOR_ORANGE60
#define DMX_252_COLOR_BLUE		DMX_252_COLOR_BLUE60
#define DMX_252_COLOR_TEAL		DMX_252_COLOR_TEAL60
#define DMX_252_COLOR_WHITE		DMX_252_COLOR_WHITE60
#endif

#if INTESITY_BASE == 50
#define DMX_252_COLOR_RED 		DMX_252_COLOR_RED50
#define DMX_252_COLOR_ORANGE 	DMX_252_COLOR_ORANGE50
#define DMX_252_COLOR_BLUE		DMX_252_COLOR_BLUE50
#define DMX_252_COLOR_TEAL		DMX_252_COLOR_TEAL50
#define DMX_252_COLOR_WHITE		DMX_252_COLOR_WHITE50
#endif

#if INTESITY_BASE == 40
#define DMX_252_COLOR_RED 		DMX_252_COLOR_RED40
#define DMX_252_COLOR_ORANGE 	DMX_252_COLOR_ORANGE40
#define DMX_252_COLOR_BLUE		DMX_252_COLOR_BLUE40
#define DMX_252_COLOR_TEAL		DMX_252_COLOR_TEAL40
#define DMX_252_COLOR_WHITE		DMX_252_COLOR_WHITE40
#endif

#if INTESITY_BASE == 30
#define DMX_252_COLOR_RED 		DMX_252_COLOR_RED30
#define DMX_252_COLOR_ORANGE 	DMX_252_COLOR_ORANGE30
#define DMX_252_COLOR_BLUE		DMX_252_COLOR_BLUE30
#define DMX_252_COLOR_TEAL		DMX_252_COLOR_TEAL30
#define DMX_252_COLOR_WHITE		DMX_252_COLOR_WHITE30
#endif

#if INTESITY_DIM == 100
#define DMX_252_COLOR_RED_DIM 		DMX_252_COLOR_RED100
#define DMX_252_COLOR_ORANGE_DIM 	DMX_252_COLOR_ORANGE100
#define DMX_252_COLOR_BLUE_DIM		DMX_252_COLOR_BLUE100
#define DMX_252_COLOR_TEAL_DIM		DMX_252_COLOR_TEAL100
#define DMX_252_COLOR_WHITE_DIM		DMX_252_COLOR_WHITE100
#endif

#if INTESITY_DIM == 80
#define DMX_252_COLOR_RED_DIM 		DMX_252_COLOR_RED80
#define DMX_252_COLOR_ORANGE_DIM 	DMX_252_COLOR_ORANGE80
#define DMX_252_COLOR_BLUE_DIM		DMX_252_COLOR_BLUE80
#define DMX_252_COLOR_TEAL_DIM		DMX_252_COLOR_TEAL80
#define DMX_252_COLOR_WHITE_DIM		DMX_252_COLOR_WHITE80
#endif

#if INTESITY_DIM == 70
#define DMX_252_COLOR_RED_DIM 		DMX_252_COLOR_RED70
#define DMX_252_COLOR_ORANGE_DIM 	DMX_252_COLOR_ORANGE70
#define DMX_252_COLOR_BLUE_DIM		DMX_252_COLOR_BLUE70
#define DMX_252_COLOR_TEAL_DIM		DMX_252_COLOR_TEAL70
#define DMX_252_COLOR_WHITE_DIM		DMX_252_COLOR_WHITE70
#endif

#if INTESITY_DIM == 60
#define DMX_252_COLOR_RED_DIM 		DMX_252_COLOR_RED60
#define DMX_252_COLOR_ORANGE_DIM 	DMX_252_COLOR_ORANGE60
#define DMX_252_COLOR_BLUE_DIM		DMX_252_COLOR_BLUE60
#define DMX_252_COLOR_TEAL_DIM		DMX_252_COLOR_TEAL60
#define DMX_252_COLOR_WHITE_DIM		DMX_252_COLOR_WHITE60
#endif

#if INTESITY_DIM == 50
#define DMX_252_COLOR_RED_DIM 		DMX_252_COLOR_RED50
#define DMX_252_COLOR_ORANGE_DIM 	DMX_252_COLOR_ORANGE50
#define DMX_252_COLOR_BLUE_DIM		DMX_252_COLOR_BLUE50
#define DMX_252_COLOR_TEAL_DIM		DMX_252_COLOR_TEAL50
#define DMX_252_COLOR_WHITE_DIM		DMX_252_COLOR_WHITE50
#endif

#if INTESITY_DIM == 40
#define DMX_252_COLOR_RED_DIM 		DMX_252_COLOR_RED40
#define DMX_252_COLOR_ORANGE_DIM 	DMX_252_COLOR_ORANGE40
#define DMX_252_COLOR_BLUE_DIM		DMX_252_COLOR_BLUE40
#define DMX_252_COLOR_TEAL_DIM		DMX_252_COLOR_TEAL40
#define DMX_252_COLOR_WHITE_DIM		DMX_252_COLOR_WHITE40
#endif

#if INTESITY_DIM == 30
#define DMX_252_COLOR_RED_DIM 		DMX_252_COLOR_RED30
#define DMX_252_COLOR_ORANGE_DIM 	DMX_252_COLOR_ORANGE30
#define DMX_252_COLOR_BLUE_DIM		DMX_252_COLOR_BLUE30
#define DMX_252_COLOR_TEAL_DIM		DMX_252_COLOR_TEAL30
#define DMX_252_COLOR_WHITE_DIM		DMX_252_COLOR_WHITE30
#endif

/* Modi *****************************************/
#define DMX_252_COLOR_BASE			DMX_BASE_ID, DMX_BASE_ID, DMX_BASE_ID
#define DMX_252_COLOR_BASEDIM		DMX_BASEDIM_ID, DMX_BASEDIM_ID, DMX_BASEDIM_ID
#define DMX_252_COLOR_ALTER			DMX_ALTER_ID, DMX_ALTER_ID, DMX_ALTER_ID
#define DMX_252_COLOR_ALTERDIM		DMX_ALTERDIM_ID, DMX_ALTERDIM_ID, DMX_ALTERDIM_ID

#define DMX_252_FLASH_FULL			255
#define DMX_252_FLASH_NONE			  0
#define DMX_252_FLASH_HALF			127

/* Modi ******************************************
 *************************************************/
#define DMX_252_MODE_OFF	  	 0
#define DMX_252_MODE_TRIPLE	  	41
#define DMX_252_MODE_SINGLE  	81

/* Makros ****************************************
 * 3 = Mode3, F = Flash, B = BaseColor, A = AlterColor
 *************************************************/
#define DMX_252__1F_White				DMX_252_MODE_SINGLE, DMX_252_FLASH_FULL, DMX_252_COLOR_WHITE, DMX_252_COLOR_UNUSED, DMX_252_COLOR_UNUSED
#define DMX_252__1_White				DMX_252_MODE_SINGLE, DMX_252_FLASH_NONE, DMX_252_COLOR_WHITE, DMX_252_COLOR_UNUSED, DMX_252_COLOR_UNUSED
#define DMX_252__1F_Full				DMX_252_MODE_SINGLE, DMX_252_FLASH_FULL, DMX_252_COLOR_FULL, DMX_252_COLOR_UNUSED, DMX_252_COLOR_UNUSED
#define DMX_252__1_Off					DMX_252_MODE_OFF, DMX_252_FLASH_NONE, DMX_252_COLOR_BLACK, DMX_252_COLOR_UNUSED, DMX_252_COLOR_UNUSED
#define DMX_252__1_Base					DMX_252_MODE_SINGLE, DMX_252_FLASH_NONE, DMX_252_COLOR_BASE, DMX_252_COLOR_UNUSED, DMX_252_COLOR_UNUSED
#define DMX_252__1_BaseDim				DMX_252_MODE_SINGLE, DMX_252_FLASH_NONE, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_UNUSED, DMX_252_COLOR_UNUSED
#define DMX_252__1_Alter				DMX_252_MODE_SINGLE, DMX_252_FLASH_NONE, DMX_252_COLOR_ALTER, DMX_252_COLOR_UNUSED, DMX_252_COLOR_UNUSED
#define DMX_252__1_AlterDim				DMX_252_MODE_SINGLE, DMX_252_FLASH_NONE, DMX_252_COLOR_ALTERDIM, DMX_252_COLOR_UNUSED, DMX_252_COLOR_UNUSED
#define DMX_252__3_BaseAlter			DMX_252_MODE_TRIPLE, DMX_252_FLASH_NONE, DMX_252_COLOR_BASE, DMX_252_COLOR_ALTER, DMX_252_COLOR_BASE
#define DMX_252__3_AlterBase			DMX_252_MODE_TRIPLE, DMX_252_FLASH_NONE, DMX_252_COLOR_ALTER, DMX_252_COLOR_BASE, DMX_252_COLOR_ALTER

#define DMX_252__Run_0					DMX_252_MODE_TRIPLE, DMX_252_FLASH_NONE, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_BASEDIM
#define DMX_252__Run_1					DMX_252_MODE_TRIPLE, DMX_252_FLASH_NONE, DMX_252_COLOR_WHITE,   DMX_252_COLOR_BASEDIM, DMX_252_COLOR_BASEDIM
#define DMX_252__Run_2					DMX_252_MODE_TRIPLE, DMX_252_FLASH_NONE, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE,   DMX_252_COLOR_BASEDIM
#define DMX_252__Run_3					DMX_252_MODE_TRIPLE, DMX_252_FLASH_NONE, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE

#define DMX_252__Strobe_w__				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_WHITE,   DMX_252_COLOR_BASEDIM, DMX_252_COLOR_BLACK
#define DMX_252__Strobe__w_				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE,   DMX_252_COLOR_BLACK
#define DMX_252__Strobe___w				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_BLACK,   DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE
#define DMX_252__Strobe_ww_				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_WHITE,   DMX_252_COLOR_WHITE,   DMX_252_COLOR_BLACK
#define DMX_252__Strobe_w_w				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_WHITE,   DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE
#define DMX_252__Strobe__ww				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE,   DMX_252_COLOR_WHITE

#define DMX_252__Strobe_wB_				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_WHITE,   DMX_252_COLOR_BASEDIM, DMX_252_COLOR_BLACK
#define DMX_252__Strobe_w_B				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_WHITE,   DMX_252_COLOR_BLACK,   DMX_252_COLOR_BASEDIM
#define DMX_252__Strobe_Bw_				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE,   DMX_252_COLOR_BLACK
#define DMX_252__Strobe__wB				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_BLACK,   DMX_252_COLOR_WHITE,   DMX_252_COLOR_BASEDIM
#define DMX_252__Strobe_B_w				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_BLACK,   DMX_252_COLOR_WHITE
#define DMX_252__Strobe__Bw				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_BLACK,   DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE
#define DMX_252__Strobe_wwB				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_WHITE,   DMX_252_COLOR_WHITE,   DMX_252_COLOR_BASEDIM
#define DMX_252__Strobe_wBw				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_WHITE,   DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE
#define DMX_252__Strobe_Bww				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_BASEDIM, DMX_252_COLOR_WHITE,   DMX_252_COLOR_WHITE

#define DMX_252__Strobe_BwB				DMX_252_MODE_TRIPLE, DMX_252_FLASH_FULL, DMX_252_COLOR_BASE, DMX_252_COLOR_WHITE,  DMX_252_COLOR_BASE

//Function prototypes
void led252_checkColors(uint16_t channel, uint8_t* dmx_data, uint8_t* current_colors );
uint8_t led252_colorFadeAnimation( uint16_t startchannel, uint8_t* current_animation_settings, uint8_t* dmx_data, uint8_t* current_colors, uint8_t fadefactor );
uint8_t led252_fadeToBaseDimAnimation( uint16_t channel, uint8_t* current_animation_settings, uint8_t* dmx_data, uint8_t* current_colors, uint8_t fadefactor );
uint8_t led252_postFlash( uint16_t channel, uint8_t* current_animation_settings, uint8_t* dmx_data, uint8_t fadefactor );
void led252_checkBrightness(uint16_t channel, uint8_t* current_animation_settings, uint8_t* dmx_data_in, uint8_t* dmx_data_out, uint8_t brightness );


#define DMX_252_NUM_CHANNELS 	11
#define DMX_252_CHANNEL_MODE	 1
#define DMX_252_CHANNEL_STROBE	 2

#endif
