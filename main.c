// Created by Thavidhu.s

#include "driverlib.h"
#include "device.h"
#include "board.h"
#include "c2000ware_libraries.h"
#include <stdbool.h>
#include "clb_config.h"

#define LED_PIN 85

volatile uint16_t ps1 = 0;
volatile uint16_t ps2 = 0;
volatile uint16_t ps3 = 0;
volatile uint16_t ps4 = 0;
volatile uint16_t ps5 = 0;

__interrupt void INT_myCPUTIMER0_ISR(void);
__interrupt void INT_PS1_XINT_ISR(void);
__interrupt void INT_PS2_XINT_ISR(void);
__interrupt void INT_PS3_XINT_ISR(void);
__interrupt void INT_PS4_XINT_ISR(void);
__interrupt void INT_PS5_XINT_ISR(void);

void main(void)
{



    Device_init();
    Device_initGPIO();

    Interrupt_initModule();
    Interrupt_initVectorTable();

    Board_init();
    C2000Ware_libraries_init();

    EINT;
    ERTM;

    while(1)
    {

         GPIO_writePin(PS3,1);
         DEVICE_DELAY_US(20);

         GPIO_writePin(PS3,0);
         DEVICE_DELAY_US(20);
        // ps1 = GPIO_readPin(PS1);
        // ps2 = GPIO_readPin(PS2);
        // ps3 = GPIO_readPin(PS3);
        // ps4 = GPIO_readPin(PS4);
        // ps5 = GPIO_readPin(PS5);

        // sensor = (ps1 || ps2 || ps3 );

        // if(sensor)
        // {
        //     GPIO_togglePin(LED_PIN);
        //     DEVICE_DELAY_US(200000);
        // }
        // else
        // {
        //     GPIO_writePin(LED_PIN, 0);
        // }

        //     //  EPWM_setCounterCompareValue(PWM1_BASE, EPWM_COUNTER_COMPARE_A, 0); //EPWM4-H1
        //     //  EPWM_setCounterCompareValue(PWM2_BASE, EPWM_COUNTER_COMPARE_A, 0); //EPWM5-H2
        //     //  EPWM_setCounterCompareValue(PWM3_BASE, EPWM_COUNTER_COMPARE_A, 0); //EPWM3-H3
        //     //  EPWM_setCounterCompareValue(PWM4_BASE, EPWM_COUNTER_COMPARE_A, 0); //EPWM1-H4
             

    }

}

__interrupt void INT_myCPUTIMER0_ISR(void)
{
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

__interrupt void INT_PS1_XINT_ISR(void)
{
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

__interrupt void INT_PS2_XINT_ISR(void)
{
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

__interrupt void INT_PS3_XINT_ISR(void)
{
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

__interrupt void INT_PS4_XINT_ISR(void)
{
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

__interrupt void INT_PS5_XINT_ISR(void)
{

    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}
