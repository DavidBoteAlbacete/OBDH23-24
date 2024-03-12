/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>


//Crea pruebas, TESTS, que programan telecomandos
#define FT_SOLO_EPD_ICU_SERV_17_0010
#define FT_SOLO_EPD_ICU_SERV_9_0020



#define FT_SOLO_EPD_ICU_SERV_1_REJECTED_TC_0030



#ifdef FT_SOLO_EPD_ICU_SERV_17_0010

//SI utilizo esta clase, programo un telecomando de este tipo. La prueba solo tiene un paso (step_0)
//Primer parametro es tiempo de liberacion de telecomando UNITIME_AFTER_POWER_ON + 6
//Segundo parametro es un mensaje que aparece en simulación.
//ASÍ EN ESE TIEMPO DE SIMULACION SE INYECTA UN TELECOMANDO DE SERVICIO 17, TELECOMANDO DE TEST
EmuGSS_TCProgram17_1 prog_FT_0010_step_0(UNITIME_AFTER_POWER_ON + 6,
					"FT_SOLO_EPD_ICU_SERV_17_0010 step 0, Connection Test");


#endif

#ifdef FT_SOLO_EPD_ICU_SERV_9_0020

#define FT_SOLO_EPD_ICU_SERV_9_0020_TIME 200000

//En esta clase ademas del timepo de liberacion y el mensaje, se proporciona el nuevo tiempo de a abordo, TELECOMANDO DE TIEMPO DE A BORDO
EmuGSS_TCProgram9_129 prog_FT_0020_step_0(UNITIME_AFTER_POWER_ON + 10 ,
		"FT_SOLO_EPD_ICU_SERV_9_0020 step 0, Update UniTime Test",
		FT_SOLO_EPD_ICU_SERV_9_0020_TIME);



#endif

//Pero recuerda que esta telemetría no está referenciada como válida though (la 17-3)
#ifdef FT_SOLO_EPD_ICU_SERV_1_REJECTED_TC_0030

#define FT_SOLO_EPD_ICU_SERV_1_0030_TIME (FT_SOLO_EPD_ICU_SERV_9_0020_TIME + 2)

EmuGSS_TCProgram17_3 prog_FT_0030_step_0(FT_SOLO_EPD_ICU_SERV_1_0030_TIME,
		"FT_SOLO_EPD_ICU_SERV_1_0030 step 0, Rejected TC",0xFF);

#endif


