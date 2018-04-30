/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F18313
        Driver Version    :  2.00
 */

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip software and any
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party
    license terms applicable to your use of third party software (including open source software) that
    may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS
    FOR A PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS
    SOFTWARE.
 */
#include "gloabal.h"
#include "mcc_generated_files/mcc.h"

void relayTimerCallBack_TMR2();
void timeCallBack_TMR0();

/*
                         Main application
 */
void main(void)
{
    adc_result_t Duty, mean, max, min;
    uint8_t index = 0;
    // initialize the device
    SYSTEM_Initialize();
    //WPUAbits.WPUA4 = 1;


    //    TMR2_SetInterruptHandler(relayTimerCallBack_TMR2);
    TMR0_SetInterruptHandler(timeCallBack_TMR0);

    // while( PORTAbits.RA3);
    //799 is max
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();
    ADC_SelectChannel(channel_ANA2);

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    //TMR2_StartTimer();
    PWM5CONbits.PWM5EN = 1;

    PWM6_LoadDutyValue(200);
    while (1)
    {
        mean = 0;
        for (index = 0; index < 20; index++)
        {
            mean += ADC_GetConversion(channel_ANA2);

        }

        Duty = mean / 20;

        PWM6_LoadDutyValue(Duty);
        // Add your application code
    }
}

void relayTimerCallBack_TMR2()
{
    OLED_Toggle();
    /* static uint8_t Counter100ms = 0;

     Counter100ms++;

     //    LED_SW_Toggle();
     if (Counter100ms < 10)
     {
         Relay_SW_SetLow();
         LED_SW_SetLow();
     }
     else if (Counter100ms == 10)
     {
         Relay_SW_SetHigh();
         LED_SW_SetHigh();
     }
     else if (Counter100ms == 11)
     {
         Push_On_SW_SetHigh();
     }
     else if (Counter100ms == 12)
     {
         Push_On_SW_SetLow();
     }
     else if (Counter100ms >= 20)
     {
         Counter100ms = 0;
     }
     */

    return;
}

void timeCallBack_TMR0()
{


    volatile static uint16_t Duty = 0;
    static bool dir = false;

    if (dir == false)
    {

        if (++Duty > 798)
            dir = true;
    }
    else
    {
        if (--Duty == 0)
            dir = false;
    }

    //PWM6_LoadDutyValue(Duty);
    return;
}
/**
 End of File
 */