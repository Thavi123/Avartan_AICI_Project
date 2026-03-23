/*
 * Copyright (c) 2020 Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef BOARD_H
#define BOARD_H

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//
// Included Files
//

#include "driverlib.h"
#include "device.h"

//*****************************************************************************
//
// PinMux Configurations
//
//*****************************************************************************

//
// ANALOG -> myANALOGPinMux0 Pinmux
//

//
// CLB_OUTPUTXBAR1 -> myCLB_OUTPUTXBAR0 Pinmux
//
//
// CLB_OUTPUTXBAR1 - GPIO Settings
//
#define GPIO_PIN_CLB_OUTPUTXBAR1 0
#define myCLB_OUTPUTXBAR0_CLBOUTPUTXBAR_GPIO 0
#define myCLB_OUTPUTXBAR0_CLBOUTPUTXBAR_PIN_CONFIG GPIO_0_CLB_OUTPUTXBAR1

//
// EPWM4 -> PWM1 Pinmux
//
//
// EPWM4_A - GPIO Settings
//
#define GPIO_PIN_EPWM4_A 46
#define PWM1_EPWMA_GPIO 46
#define PWM1_EPWMA_PIN_CONFIG GPIO_46_EPWM4_A
//
// EPWM4_B - GPIO Settings
//
#define GPIO_PIN_EPWM4_B 47
#define PWM1_EPWMB_GPIO 47
#define PWM1_EPWMB_PIN_CONFIG GPIO_47_EPWM4_B

//
// EPWM5 -> PWM2 Pinmux
//
//
// EPWM5_A - GPIO Settings
//
#define GPIO_PIN_EPWM5_A 59
#define PWM2_EPWMA_GPIO 59
#define PWM2_EPWMA_PIN_CONFIG GPIO_59_EPWM5_A
//
// EPWM5_B - GPIO Settings
//
#define GPIO_PIN_EPWM5_B 73
#define PWM2_EPWMB_GPIO 73
#define PWM2_EPWMB_PIN_CONFIG GPIO_73_EPWM5_B

//
// EPWM3 -> PWM3 Pinmux
//
//
// EPWM3_A - GPIO Settings
//
#define GPIO_PIN_EPWM3_A 4
#define PWM3_EPWMA_GPIO 4
#define PWM3_EPWMA_PIN_CONFIG GPIO_4_EPWM3_A
//
// EPWM3_B - GPIO Settings
//
#define GPIO_PIN_EPWM3_B 60
#define PWM3_EPWMB_GPIO 60
#define PWM3_EPWMB_PIN_CONFIG GPIO_60_EPWM3_B

//
// EPWM6 -> PWM4 Pinmux
//
//
// EPWM6_A - GPIO Settings
//
#define GPIO_PIN_EPWM6_A 220
#define PWM4_EPWMA_GPIO 220
#define PWM4_EPWMA_PIN_CONFIG GPIO_220_EPWM6_A
//
// EPWM6_B - GPIO Settings
//
#define GPIO_PIN_EPWM6_B 221
#define PWM4_EPWMB_GPIO 221
#define PWM4_EPWMB_PIN_CONFIG GPIO_221_EPWM6_B
//
// GPIO65 - GPIO Settings
//
#define LED_GPIO_GPIO_PIN_CONFIG GPIO_65_GPIO65
//
// GPIO85 - GPIO Settings
//
#define LED_2_GPIO_GPIO_PIN_CONFIG GPIO_85_GPIO85
//
// GPIO11 - GPIO Settings
//
#define PS1_GPIO_PIN_CONFIG GPIO_11_GPIO11
//
// GPIO13 - GPIO Settings
//
#define PS3_GPIO_PIN_CONFIG GPIO_13_GPIO13
//
// GPIO14 - GPIO Settings
//
#define PS4_GPIO_PIN_CONFIG GPIO_14_GPIO14
//
// GPIO15 - GPIO Settings
//
#define PS5_GPIO_PIN_CONFIG GPIO_15_GPIO15
//
// GPIO58 - GPIO Settings
//
#define OC_A_GPIO_PIN_CONFIG GPIO_58_GPIO58
//
// GPIO41 - GPIO Settings
//
#define OC_B_GPIO_PIN_CONFIG GPIO_41_GPIO41
//
// GPIO61 - GPIO Settings
//
#define CC_A_GPIO_PIN_CONFIG GPIO_61_GPIO61
//
// GPIO62 - GPIO Settings
//
#define CC_B_GPIO_PIN_CONFIG GPIO_62_GPIO62
//
// GPIO63 - GPIO Settings
//
#define CC_C_GPIO_PIN_CONFIG GPIO_63_GPIO63
//
// GPIO64 - GPIO Settings
//
#define CC_D_GPIO_PIN_CONFIG GPIO_64_GPIO64
//
// GPIO10 - GPIO Settings
//
#define RELAY_GPIO_PIN_CONFIG GPIO_10_GPIO10
//
// GPIO66 - GPIO Settings
//
#define PFC_GPIO_PIN_CONFIG GPIO_66_GPIO66
//
// GPIO25 - GPIO Settings
//
#define SW_GPIO_PIN_CONFIG GPIO_25_GPIO25
//
// GPIO80 - GPIO Settings
//
#define ENC_B_GPIO_PIN_CONFIG GPIO_80_GPIO80
//
// GPIO100 - GPIO Settings
//
#define ENC_A_GPIO_PIN_CONFIG GPIO_100_GPIO100
//
// GPIO69 - GPIO Settings
//
#define FAN_TACH_GPIO_PIN_CONFIG GPIO_69_GPIO69
//
// GPIO35 - GPIO Settings
//
#define OC_C_GPIO_PIN_CONFIG GPIO_35_GPIO35
//
// GPIO34 - GPIO Settings
//
#define OC_D_GPIO_PIN_CONFIG GPIO_34_GPIO34
//
// GPIO12 - GPIO Settings
//
#define PS2_GPIO_PIN_CONFIG GPIO_12_GPIO12
//
// GPIO30 - GPIO Settings
//
#define IGBT_DRIVE_GPIO_PIN_CONFIG GPIO_30_GPIO30

//
// SCIB -> mySCI0 Pinmux
//
//
// SCIB_RX - GPIO Settings
//
#define GPIO_PIN_SCIB_RX 87
#define mySCI0_SCIRX_GPIO 87
#define mySCI0_SCIRX_PIN_CONFIG GPIO_87_SCIB_RX
//
// SCIB_TX - GPIO Settings
//
#define GPIO_PIN_SCIB_TX 86
#define mySCI0_SCITX_GPIO 86
#define mySCI0_SCITX_PIN_CONFIG GPIO_86_SCIB_TX

//
// SCIA -> mySCI1 Pinmux
//
//
// SCIA_RX - GPIO Settings
//
#define GPIO_PIN_SCIA_RX 43
#define mySCI1_SCIRX_GPIO 43
#define mySCI1_SCIRX_PIN_CONFIG GPIO_43_SCIA_RX
//
// SCIA_TX - GPIO Settings
//
#define GPIO_PIN_SCIA_TX 42
#define mySCI1_SCITX_GPIO 42
#define mySCI1_SCITX_PIN_CONFIG GPIO_42_SCIA_TX

//
// SPID -> mySPI0 Pinmux
//
//
// SPID_PICO - GPIO Settings
//
#define GPIO_PIN_SPID_PICO 91
#define mySPI0_SPIPICO_GPIO 91
#define mySPI0_SPIPICO_PIN_CONFIG GPIO_91_SPID_PICO
//
// SPID_POCI - GPIO Settings
//
#define GPIO_PIN_SPID_POCI 92
#define mySPI0_SPIPOCI_GPIO 92
#define mySPI0_SPIPOCI_PIN_CONFIG GPIO_92_SPID_POCI
//
// SPID_CLK - GPIO Settings
//
#define GPIO_PIN_SPID_CLK 90
#define mySPI0_SPICLK_GPIO 90
#define mySPI0_SPICLK_PIN_CONFIG GPIO_90_SPID_CLK
//
// SPID_PTE - GPIO Settings
//
#define GPIO_PIN_SPID_PTE 89
#define mySPI0_SPIPTE_GPIO 89
#define mySPI0_SPIPTE_PIN_CONFIG GPIO_89_SPID_PTE

//
// UARTB -> myUART0 Pinmux
//
//
// UARTB_TX - GPIO Settings
//
#define GPIO_PIN_UARTB_TX 70
#define myUART0_UARTTX_GPIO 70
#define myUART0_UARTTX_PIN_CONFIG GPIO_70_UARTB_TX
//
// UARTB_RX - GPIO Settings
//
#define GPIO_PIN_UARTB_RX 71
#define myUART0_UARTRX_GPIO 71
#define myUART0_UARTRX_PIN_CONFIG GPIO_71_UARTB_RX

//
// UARTA -> myUART1 Pinmux
//
//
// UARTA_TX - GPIO Settings
//
#define GPIO_PIN_UARTA_TX 2
#define myUART1_UARTTX_GPIO 2
#define myUART1_UARTTX_PIN_CONFIG GPIO_2_UARTA_TX
//
// UARTA_RX - GPIO Settings
//
#define GPIO_PIN_UARTA_RX 3
#define myUART1_UARTRX_GPIO 3
#define myUART1_UARTRX_PIN_CONFIG GPIO_3_UARTA_RX

//*****************************************************************************
//
// ADC Configurations
//
//*****************************************************************************
#define myADC0_BASE ADCA_BASE
#define myADC0_RESULT_BASE ADCARESULT_BASE
#define myADC0_SOC0 ADC_SOC_NUMBER0
#define myADC0_FORCE_SOC0 ADC_FORCE_SOC0
#define myADC0_SAMPLE_WINDOW_SOC0 100
#define myADC0_TRIGGER_SOURCE_SOC0 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC0 ADC_CH_ADCIN1
#define myADC0_SOC1 ADC_SOC_NUMBER1
#define myADC0_FORCE_SOC1 ADC_FORCE_SOC1
#define myADC0_SAMPLE_WINDOW_SOC1 100
#define myADC0_TRIGGER_SOURCE_SOC1 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC1 ADC_CH_ADCIN2
#define myADC0_SOC2 ADC_SOC_NUMBER2
#define myADC0_FORCE_SOC2 ADC_FORCE_SOC2
#define myADC0_SAMPLE_WINDOW_SOC2 100
#define myADC0_TRIGGER_SOURCE_SOC2 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC2 ADC_CH_ADCIN3
#define myADC0_SOC3 ADC_SOC_NUMBER3
#define myADC0_FORCE_SOC3 ADC_FORCE_SOC3
#define myADC0_SAMPLE_WINDOW_SOC3 100
#define myADC0_TRIGGER_SOURCE_SOC3 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC3 ADC_CH_ADCIN4
#define myADC0_SOC4 ADC_SOC_NUMBER4
#define myADC0_FORCE_SOC4 ADC_FORCE_SOC4
#define myADC0_SAMPLE_WINDOW_SOC4 100
#define myADC0_TRIGGER_SOURCE_SOC4 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC4 ADC_CH_ADCIN5
#define myADC0_SOC5 ADC_SOC_NUMBER5
#define myADC0_FORCE_SOC5 ADC_FORCE_SOC5
#define myADC0_SAMPLE_WINDOW_SOC5 100
#define myADC0_TRIGGER_SOURCE_SOC5 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC5 ADC_CH_ADCIN6
#define myADC0_SOC6 ADC_SOC_NUMBER6
#define myADC0_FORCE_SOC6 ADC_FORCE_SOC6
#define myADC0_SAMPLE_WINDOW_SOC6 100
#define myADC0_TRIGGER_SOURCE_SOC6 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC6 ADC_CH_ADCIN10
#define myADC0_SOC7 ADC_SOC_NUMBER7
#define myADC0_FORCE_SOC7 ADC_FORCE_SOC7
#define myADC0_SAMPLE_WINDOW_SOC7 100
#define myADC0_TRIGGER_SOURCE_SOC7 ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_SOC7 ADC_CH_ADCIN11
void myADC0_init();

#define myADC1_BASE ADCB_BASE
#define myADC1_RESULT_BASE ADCBRESULT_BASE
#define myADC1_SOC0 ADC_SOC_NUMBER0
#define myADC1_FORCE_SOC0 ADC_FORCE_SOC0
#define myADC1_SAMPLE_WINDOW_SOC0 100
#define myADC1_TRIGGER_SOURCE_SOC0 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC0 ADC_CH_ADCIN0
#define myADC1_SOC1 ADC_SOC_NUMBER1
#define myADC1_FORCE_SOC1 ADC_FORCE_SOC1
#define myADC1_SAMPLE_WINDOW_SOC1 100
#define myADC1_TRIGGER_SOURCE_SOC1 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC1 ADC_CH_ADCIN2
#define myADC1_SOC2 ADC_SOC_NUMBER2
#define myADC1_FORCE_SOC2 ADC_FORCE_SOC2
#define myADC1_SAMPLE_WINDOW_SOC2 100
#define myADC1_TRIGGER_SOURCE_SOC2 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC2 ADC_CH_ADCIN3
#define myADC1_SOC3 ADC_SOC_NUMBER3
#define myADC1_FORCE_SOC3 ADC_FORCE_SOC3
#define myADC1_SAMPLE_WINDOW_SOC3 100
#define myADC1_TRIGGER_SOURCE_SOC3 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC3 ADC_CH_ADCIN6
#define myADC1_SOC4 ADC_SOC_NUMBER4
#define myADC1_FORCE_SOC4 ADC_FORCE_SOC4
#define myADC1_SAMPLE_WINDOW_SOC4 100
#define myADC1_TRIGGER_SOURCE_SOC4 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC4 ADC_CH_ADCIN7
#define myADC1_SOC5 ADC_SOC_NUMBER5
#define myADC1_FORCE_SOC5 ADC_FORCE_SOC5
#define myADC1_SAMPLE_WINDOW_SOC5 100
#define myADC1_TRIGGER_SOURCE_SOC5 ADC_TRIGGER_SW_ONLY
#define myADC1_CHANNEL_SOC5 ADC_CH_ADCIN6
void myADC1_init();

#define myADC2_BASE ADCC_BASE
#define myADC2_RESULT_BASE ADCCRESULT_BASE
#define myADC2_SOC0 ADC_SOC_NUMBER0
#define myADC2_FORCE_SOC0 ADC_FORCE_SOC0
#define myADC2_SAMPLE_WINDOW_SOC0 325
#define myADC2_TRIGGER_SOURCE_SOC0 ADC_TRIGGER_SW_ONLY
#define myADC2_CHANNEL_SOC0 ADC_CH_ADCIN0_ADCIN1
#define myADC2_SOC1 ADC_SOC_NUMBER1
#define myADC2_FORCE_SOC1 ADC_FORCE_SOC1
#define myADC2_SAMPLE_WINDOW_SOC1 325
#define myADC2_TRIGGER_SOURCE_SOC1 ADC_TRIGGER_SW_ONLY
#define myADC2_CHANNEL_SOC1 ADC_CH_ADCIN2_ADCIN3
#define myADC2_SOC2 ADC_SOC_NUMBER2
#define myADC2_FORCE_SOC2 ADC_FORCE_SOC2
#define myADC2_SAMPLE_WINDOW_SOC2 325
#define myADC2_TRIGGER_SOURCE_SOC2 ADC_TRIGGER_SW_ONLY
#define myADC2_CHANNEL_SOC2 ADC_CH_ADCIN4_ADCIN5
#define myADC2_SOC3 ADC_SOC_NUMBER3
#define myADC2_FORCE_SOC3 ADC_FORCE_SOC3
#define myADC2_SAMPLE_WINDOW_SOC3 325
#define myADC2_TRIGGER_SOURCE_SOC3 ADC_TRIGGER_SW_ONLY
#define myADC2_CHANNEL_SOC3 ADC_CH_ADCIN14_ADCIN15
void myADC2_init();


//*****************************************************************************
//
// ASYSCTL Configurations
//
//*****************************************************************************

//*****************************************************************************
//
// CLB Configurations
//
//*****************************************************************************
#define myCLB0_BASE CLB1_BASE
void myCLB0_init();
//
// Tile Configurations for all CLBs are in this file
//
#include "clb_config.h"

//*****************************************************************************
//
// CLBOUTPUTXBAR Configurations
//
//*****************************************************************************
void myCLB_OUTPUTXBAR0_init();
#define myCLB_OUTPUTXBAR0 XBAR_OUTPUT1
#define myCLB_OUTPUTXBAR0_ENABLED_MUXES (XBAR_MUX00 | XBAR_MUX01 | XBAR_MUX03)

//*****************************************************************************
//
// CLBXBAR Configurations
//
//*****************************************************************************
void myCLBXBAR0_init();
#define myCLBXBAR0 XBAR_AUXSIG0

#define myCLBXBAR0_ENABLED_MUXES (XBAR_MUX07)
void myCLBXBAR1_init();
#define myCLBXBAR1 XBAR_AUXSIG1

#define myCLBXBAR1_ENABLED_MUXES (XBAR_MUX09)
void myCLBXBAR2_init();
#define myCLBXBAR2 XBAR_AUXSIG2

#define myCLBXBAR2_ENABLED_MUXES (XBAR_MUX11)

//*****************************************************************************
//
// CPUTIMER Configurations
//
//*****************************************************************************
#define myCPUTIMER0_BASE CPUTIMER0_BASE
void myCPUTIMER0_init();

//*****************************************************************************
//
// DAC Configurations
//
//*****************************************************************************
#define myDAC0_BASE DACA_BASE
void myDAC0_init();
#define myDAC1_BASE DACC_BASE
void myDAC1_init();

//*****************************************************************************
//
// EPWM Configurations
//
//*****************************************************************************
#define PWM1_BASE EPWM4_BASE
#define PWM1_TBPRD 10000
#define PWM1_COUNTER_MODE EPWM_COUNTER_MODE_UP
#define PWM1_TBPHS 0
#define PWM1_CMPA 5000
#define PWM1_CMPB 5000
#define PWM1_CMPC 0
#define PWM1_CMPD 0
#define PWM1_DBRED 0
#define PWM1_DBFED 0
#define PWM1_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PWM1_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PWM1_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define PWM2_BASE EPWM5_BASE
#define PWM2_TBPRD 10000
#define PWM2_COUNTER_MODE EPWM_COUNTER_MODE_UP
#define PWM2_TBPHS 0
#define PWM2_CMPA 5000
#define PWM2_CMPB 5000
#define PWM2_CMPC 0
#define PWM2_CMPD 0
#define PWM2_DBRED 0
#define PWM2_DBFED 0
#define PWM2_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PWM2_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PWM2_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define PWM3_BASE EPWM3_BASE
#define PWM3_TBPRD 10000
#define PWM3_COUNTER_MODE EPWM_COUNTER_MODE_UP
#define PWM3_TBPHS 0
#define PWM3_CMPA 5000
#define PWM3_CMPB 5000
#define PWM3_CMPC 0
#define PWM3_CMPD 0
#define PWM3_DBRED 0
#define PWM3_DBFED 0
#define PWM3_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PWM3_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PWM3_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define PWM4_BASE EPWM6_BASE
#define PWM4_TBPRD 10000
#define PWM4_COUNTER_MODE EPWM_COUNTER_MODE_UP
#define PWM4_TBPHS 0
#define PWM4_CMPA 5000
#define PWM4_CMPB 5000
#define PWM4_CMPC 0
#define PWM4_CMPD 0
#define PWM4_DBRED 0
#define PWM4_DBFED 0
#define PWM4_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PWM4_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PWM4_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED

//*****************************************************************************
//
// GPIO Configurations
//
//*****************************************************************************
#define LED_GPIO 65
void LED_GPIO_init();
#define LED_2_GPIO 85
void LED_2_GPIO_init();
#define PS1 11
void PS1_init();
#define PS3 13
void PS3_init();
#define PS4 14
void PS4_init();
#define PS5 15
void PS5_init();
#define OC_A 58
void OC_A_init();
#define OC_B 41
void OC_B_init();
#define CC_A 61
void CC_A_init();
#define CC_B 62
void CC_B_init();
#define CC_C 63
void CC_C_init();
#define CC_D 64
void CC_D_init();
#define RELAY 10
void RELAY_init();
#define PFC 66
void PFC_init();
#define SW 25
void SW_init();
#define ENC_B 80
void ENC_B_init();
#define ENC_A 100
void ENC_A_init();
#define FAN_TACH 69
void FAN_TACH_init();
#define OC_C 35
void OC_C_init();
#define OC_D 34
void OC_D_init();
#define PS2 12
void PS2_init();
#define IGBT_DRIVE 30
void IGBT_DRIVE_init();

//*****************************************************************************
//
// INPUTXBAR Configurations
//
//*****************************************************************************
#define myINPUTXBARINPUT0_SOURCE 11
#define myINPUTXBARINPUT0_INPUT XBAR_INPUT4
void myINPUTXBARINPUT0_init();
#define myINPUTXBARINPUT1_SOURCE 12
#define myINPUTXBARINPUT1_INPUT XBAR_INPUT5
void myINPUTXBARINPUT1_init();
#define myINPUTXBARINPUT2_SOURCE 13
#define myINPUTXBARINPUT2_INPUT XBAR_INPUT6
void myINPUTXBARINPUT2_init();
#define myINPUTXBARINPUT3_SOURCE 14
#define myINPUTXBARINPUT3_INPUT XBAR_INPUT13
void myINPUTXBARINPUT3_init();
#define myINPUTXBARINPUT4_SOURCE 15
#define myINPUTXBARINPUT4_INPUT XBAR_INPUT14
void myINPUTXBARINPUT4_init();

//*****************************************************************************
//
// INTERRUPT Configurations
//
//*****************************************************************************

// Interrupt Settings for INT_myCPUTIMER0
// ISR need to be defined for the registered interrupts
#define INT_myCPUTIMER0 INT_TIMER0
#define INT_myCPUTIMER0_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP1
extern __interrupt void INT_myCPUTIMER0_ISR(void);

// Interrupt Settings for INT_PS1_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS1_XINT INT_XINT1
#define INT_PS1_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP1
extern __interrupt void INT_PS1_XINT_ISR(void);

// Interrupt Settings for INT_PS3_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS3_XINT INT_XINT3
#define INT_PS3_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP12
extern __interrupt void INT_PS3_XINT_ISR(void);

// Interrupt Settings for INT_PS4_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS4_XINT INT_XINT4
#define INT_PS4_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP12
extern __interrupt void INT_PS4_XINT_ISR(void);

// Interrupt Settings for INT_PS5_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS5_XINT INT_XINT5
#define INT_PS5_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP12
extern __interrupt void INT_PS5_XINT_ISR(void);

// Interrupt Settings for INT_PS2_XINT
// ISR need to be defined for the registered interrupts
#define INT_PS2_XINT INT_XINT2
#define INT_PS2_XINT_INTERRUPT_ACK_GROUP INTERRUPT_ACK_GROUP1
extern __interrupt void INT_PS2_XINT_ISR(void);

//*****************************************************************************
//
// SCI Configurations
//
//*****************************************************************************
#define mySCI0_BASE SCIB_BASE
#define mySCI0_BAUDRATE 115200
#define mySCI0_CONFIG_WLEN SCI_CONFIG_WLEN_8
#define mySCI0_CONFIG_STOP SCI_CONFIG_STOP_ONE
#define mySCI0_CONFIG_PAR SCI_CONFIG_PAR_NONE
#define mySCI0_FIFO_TX_LVL SCI_FIFO_TX0
#define mySCI0_FIFO_RX_LVL SCI_FIFO_RX0
void mySCI0_init();
#define mySCI1_BASE SCIA_BASE
#define mySCI1_BAUDRATE 115200
#define mySCI1_CONFIG_WLEN SCI_CONFIG_WLEN_8
#define mySCI1_CONFIG_STOP SCI_CONFIG_STOP_ONE
#define mySCI1_CONFIG_PAR SCI_CONFIG_PAR_NONE
#define mySCI1_FIFO_TX_LVL SCI_FIFO_TX0
#define mySCI1_FIFO_RX_LVL SCI_FIFO_RX1
void mySCI1_init();

//*****************************************************************************
//
// SPI Configurations
//
//*****************************************************************************
#define mySPI0_BASE SPID_BASE
#define mySPI0_BITRATE 1000000
#define mySPI0_DATAWIDTH 16
void mySPI0_init();

//*****************************************************************************
//
// SYNC Scheme Configurations
//
//*****************************************************************************

//*****************************************************************************
//
// UART Configurations
//
//*****************************************************************************
//
// myUART0 Configuration
//
#define myUART0_BASE UARTB_BASE
#define myUART0_BAUDRATE 115200
#define myUART0_CONFIG_WLEN UART_CONFIG_WLEN_8
#define myUART0_CONFIG_STP2 UART_CONFIG_STOP_ONE
#define myUART0_CONFIG_EPS UART_CONFIG_PAR_ODD
#define myUART0_CONFIG_SPS 0


void    myUART0_init();
//
// myUART1 Configuration
//
#define myUART1_BASE UARTA_BASE
#define myUART1_BAUDRATE 115200
#define myUART1_CONFIG_WLEN UART_CONFIG_WLEN_8
#define myUART1_CONFIG_STP2 UART_CONFIG_STOP_ONE
#define myUART1_CONFIG_EPS UART_CONFIG_PAR_ODD
#define myUART1_CONFIG_SPS 0


void    myUART1_init();

//*****************************************************************************
//
// XINT Configurations
//
//*****************************************************************************
#define PS1_XINT GPIO_INT_XINT1
#define PS1_XINT_TYPE GPIO_INT_TYPE_FALLING_EDGE
void PS1_XINT_init();
#define PS3_XINT GPIO_INT_XINT3
#define PS3_XINT_TYPE GPIO_INT_TYPE_RISING_EDGE
void PS3_XINT_init();
#define PS4_XINT GPIO_INT_XINT4
#define PS4_XINT_TYPE GPIO_INT_TYPE_FALLING_EDGE
void PS4_XINT_init();
#define PS5_XINT GPIO_INT_XINT5
#define PS5_XINT_TYPE GPIO_INT_TYPE_FALLING_EDGE
void PS5_XINT_init();
#define PS2_XINT GPIO_INT_XINT2
#define PS2_XINT_TYPE GPIO_INT_TYPE_FALLING_EDGE
void PS2_XINT_init();

//*****************************************************************************
//
// Board Configurations
//
//*****************************************************************************
void	Board_init();
void	ADC_init();
void	ASYSCTL_init();
void	CLB_init();
void	CLB_OUTPUTXBAR_init();
void	CLBXBAR_init();
void	CPUTIMER_init();
void	DAC_init();
void	EPWM_init();
void	GPIO_init();
void	INPUTXBAR_init();
void	INTERRUPT_init();
void	SCI_init();
void	SPI_init();
void	SYNC_init();
void	UART_init();
void	XINT_init();
void	PinMux_init();

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif  // end of BOARD_H definition
