/*
 * Copyright (c) 2016-2020, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* header file is included with -include compiler option
Instructions:
 - Remove the 'Template_' from the name and place this file into your 'src' folder.
 - Include it with the -include compiler option with:  "${ProjDirPath}/source/IncludeMcuLibConfig.h"
 - Add the following to the -I compiler option:
../McuLib
../McuLib/config
../McuLib/config/fonts
../McuLib/fonts
../McuLib/src
../McuLib/FreeRTOS/Source/include
../McuLib/FreeRTOS/Source/portable/GCC/ARM_CM4F
../McuLib/SEGGER_RTT
../McuLib/SEGGER_Sysview
../McuLib/TraceRecorder
../McuLib/TraceRecorder/config
../McuLib/TraceRecorder/include
../McuLib/TraceRecorder/streamports/Jlink_RTT/include
../McuLib/HD44780
../McuLib/FatFS
../McuLib/FatFS/source
 */

/* For ESP32 targets:
  - place the IncludeMcuLibConfig.h into the project 'config' folder
  - copy the template file McuLib\ESP32_CMakeLists.txt and rename it to McuLib\CMakeLists.text
  - add the following to your main CMakeLists.txt, between cmake_minimum_required() and the include():
list(APPEND EXTRA_COMPONENT_DIRS "../McuLib")
  - add the following after the include():
add_compile_options(-I../config)
add_compile_options(-include "../config/IncludeMcuLibConfig.h")

  - It should look similar to this:
    cmake_minimum_required(VERSION 3.5)

    list(APPEND EXTRA_COMPONENT_DIRS "../McuLib")

    include($ENV{IDF_PATH}/tools/cmake/project.cmake)

    add_compile_options(-I../config)
    add_compile_options(-include "../config/IncludeMcuLibConfig.h")

    project(idf-eclipse)

 */

#ifndef INCLUDEMCULIBCONFIG_H_
#define INCLUDEMCULIBCONFIG_H_

/* ------------------- SDK/Library ---------------------------*/
#define McuLib_CONFIG_SDK_VERSION_USED  McuLib_CONFIG_SDK_MCUXPRESSO_2_0
/* set the CPU. See McuLibConfig.h for all supported CPUs */
/* configuration for KE02Z64 */
#define McuLib_CONFIG_CPU_IS_KINETIS    (1)  /* KE02 */
#define McuLib_CONFIG_CPU_VARIANT       McuLib_CONFIG_CPU_VARIANT_NXP_KE02
#define McuLib_CONFIG_CORTEX_M          (0)    /*!< 0: Cortex-M0, 3: M3, 4: M4, 7: M7, 33: M33, -1 otherwise */
/* ------------------- RTOS ---------------------------*/
#define McuLib_CONFIG_SDK_USE_FREERTOS       (0)
/* #define configUSE_SEGGER_SYSTEM_VIEWER_HOOKS (1) */
/* #define configTOTAL_HEAP_SIZE                (24*1024) */
/* #define configUSE_HEAP_SECTION_NAME          (1) */
/* #define configHEAP_SECTION_NAME_STRING       ".bss.$SRAM_LOWER.FreeRTOS" */
/* ------------------- FatFS ---------------------------*/
#define McuLib_CONFIG_USE_FAT_FS             (0)

#endif /* INCLUDEMCULIBCONFIG_H_ */
