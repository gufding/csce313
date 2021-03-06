/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'nios_system'
 * SOPC Builder design path: ../../nios_system.sopcinfo
 *
 * Generated: Mon Feb 17 21:41:32 EST 2020
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x10202820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1d
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x08000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1d
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x08000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x10202820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1d
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x08000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1d
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x08000000


/*
 * Custom instruction macros
 *
 */

#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0(n,A,B) __builtin_custom_inii(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+(n&ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N_MASK),(A),(B))
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1(n,A,B) __builtin_custom_inii(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+(n&ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N_MASK),(A),(B))
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FADDS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+5
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FDIVS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+7
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FIXSI_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+1
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FLOATIS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+2
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FMULS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+4
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FSQRTS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+3
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FSUBS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+6
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N 0xf8
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N_MASK ((1<<3)-1)
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_ROUND_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+0
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FABSS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+0
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPEQS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+3
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPGES_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+4
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPGTS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+5
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPLES_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+6
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPLTS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+7
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPNES_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+2
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FMAXS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+8
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FMINS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+9
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FNEGS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+1
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N 0xe0
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N_MASK ((1<<4)-1)
#define fmaxf(A,B) __builtin_custom_fnff(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FMAXS_N,(A),(B))
#define fminf(A,B) __builtin_custom_fnff(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FMINS_N,(A),(B))
#define lroundf(A) __builtin_custom_inf(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_ROUND_N,(A))
#define sqrtf(A) __builtin_custom_fnf(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FSQRTS_N,(A))


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_NIOS_CUSTOM_INSTR_FLOATING_POINT_2
#define __ALTERA_UP_AVALON_SRAM
#define __ALTERA_UP_AVALON_VIDEO_CHARACTER_BUFFER_WITH_DMA
#define __ALTERA_UP_AVALON_VIDEO_PIXEL_BUFFER_DMA
#define __ALTERA_UP_AVALON_VIDEO_RGB_RESAMPLER


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/null"
#define ALT_STDERR_BASE 0x0
#define ALT_STDERR_DEV null
#define ALT_STDERR_TYPE ""
#define ALT_STDIN "/dev/null"
#define ALT_STDIN_BASE 0x0
#define ALT_STDIN_DEV null
#define ALT_STDIN_TYPE ""
#define ALT_STDOUT "/dev/null"
#define ALT_STDOUT_BASE 0x0
#define ALT_STDOUT_DEV null
#define ALT_STDOUT_TYPE ""
#define ALT_SYSTEM_NAME "nios_system"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x10203010
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * sdram_controller_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sdram_controller_0 altera_avalon_new_sdram_controller
#define SDRAM_CONTROLLER_0_BASE 0x8000000
#define SDRAM_CONTROLLER_0_CAS_LATENCY 3
#define SDRAM_CONTROLLER_0_CONTENTS_INFO
#define SDRAM_CONTROLLER_0_INIT_NOP_DELAY 0.0
#define SDRAM_CONTROLLER_0_INIT_REFRESH_COMMANDS 2
#define SDRAM_CONTROLLER_0_IRQ -1
#define SDRAM_CONTROLLER_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_CONTROLLER_0_IS_INITIALIZED 1
#define SDRAM_CONTROLLER_0_NAME "/dev/sdram_controller_0"
#define SDRAM_CONTROLLER_0_POWERUP_DELAY 100.0
#define SDRAM_CONTROLLER_0_REFRESH_PERIOD 15.625
#define SDRAM_CONTROLLER_0_REGISTER_DATA_IN 1
#define SDRAM_CONTROLLER_0_SDRAM_ADDR_WIDTH 0x19
#define SDRAM_CONTROLLER_0_SDRAM_BANK_WIDTH 2
#define SDRAM_CONTROLLER_0_SDRAM_COL_WIDTH 10
#define SDRAM_CONTROLLER_0_SDRAM_DATA_WIDTH 32
#define SDRAM_CONTROLLER_0_SDRAM_NUM_BANKS 4
#define SDRAM_CONTROLLER_0_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_CONTROLLER_0_SDRAM_ROW_WIDTH 13
#define SDRAM_CONTROLLER_0_SHARED_DATA 0
#define SDRAM_CONTROLLER_0_SIM_MODEL_BASE 0
#define SDRAM_CONTROLLER_0_SPAN 134217728
#define SDRAM_CONTROLLER_0_STARVATION_INDICATOR 0
#define SDRAM_CONTROLLER_0_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_CONTROLLER_0_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_CONTROLLER_0_T_AC 5.5
#define SDRAM_CONTROLLER_0_T_MRD 3
#define SDRAM_CONTROLLER_0_T_RCD 20.0
#define SDRAM_CONTROLLER_0_T_RFC 70.0
#define SDRAM_CONTROLLER_0_T_RP 20.0
#define SDRAM_CONTROLLER_0_T_WR 14.0


/*
 * sram_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sram_0 altera_up_avalon_sram
#define SRAM_0_BASE 0x10000000
#define SRAM_0_IRQ -1
#define SRAM_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SRAM_0_NAME "/dev/sram_0"
#define SRAM_0_SPAN 2097152
#define SRAM_0_TYPE "altera_up_avalon_sram"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x0
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 1
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999
#define TIMER_0_MULT 0.001
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"


/*
 * video_character_buffer_with_dma_0_avalon_char_buffer_slave configuration
 *
 */

#define ALT_MODULE_CLASS_video_character_buffer_with_dma_0_avalon_char_buffer_slave altera_up_avalon_video_character_buffer_with_dma
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_BASE 0x10200000
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_IRQ -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_NAME "/dev/video_character_buffer_with_dma_0_avalon_char_buffer_slave"
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_SPAN 8192
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"


/*
 * video_character_buffer_with_dma_0_avalon_char_control_slave configuration
 *
 */

#define ALT_MODULE_CLASS_video_character_buffer_with_dma_0_avalon_char_control_slave altera_up_avalon_video_character_buffer_with_dma
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_BASE 0x10203018
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_IRQ -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_NAME "/dev/video_character_buffer_with_dma_0_avalon_char_control_slave"
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_SPAN 8
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"


/*
 * video_pixel_buffer_dma_0 configuration
 *
 */

#define ALT_MODULE_CLASS_video_pixel_buffer_dma_0 altera_up_avalon_video_pixel_buffer_dma
#define VIDEO_PIXEL_BUFFER_DMA_0_BASE 0x10203000
#define VIDEO_PIXEL_BUFFER_DMA_0_IRQ -1
#define VIDEO_PIXEL_BUFFER_DMA_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_PIXEL_BUFFER_DMA_0_NAME "/dev/video_pixel_buffer_dma_0"
#define VIDEO_PIXEL_BUFFER_DMA_0_SPAN 16
#define VIDEO_PIXEL_BUFFER_DMA_0_TYPE "altera_up_avalon_video_pixel_buffer_dma"


/*
 * video_rgb_resampler_0 configuration
 *
 */

#define ALT_MODULE_CLASS_video_rgb_resampler_0 altera_up_avalon_video_rgb_resampler
#define VIDEO_RGB_RESAMPLER_0_BASE 0x10203020
#define VIDEO_RGB_RESAMPLER_0_IRQ -1
#define VIDEO_RGB_RESAMPLER_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_RGB_RESAMPLER_0_NAME "/dev/video_rgb_resampler_0"
#define VIDEO_RGB_RESAMPLER_0_SPAN 4
#define VIDEO_RGB_RESAMPLER_0_TYPE "altera_up_avalon_video_rgb_resampler"

#endif /* __SYSTEM_H_ */
