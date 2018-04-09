/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F18313
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Relay_SW aliases
#define Relay_SW_TRIS                 TRISAbits.TRISA2
#define Relay_SW_LAT                  LATAbits.LATA2
#define Relay_SW_PORT                 PORTAbits.RA2
#define Relay_SW_WPU                  WPUAbits.WPUA2
#define Relay_SW_OD                   ODCONAbits.ODCA2
#define Relay_SW_ANS                  ANSELAbits.ANSA2
#define Relay_SW_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define Relay_SW_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define Relay_SW_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define Relay_SW_GetValue()           PORTAbits.RA2
#define Relay_SW_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define Relay_SW_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define Relay_SW_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define Relay_SW_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define Relay_SW_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define Relay_SW_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define Relay_SW_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define Relay_SW_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)


// get/set LED_SW aliases
#define LED_SW_TRIS                 TRISAbits.TRISA4
#define LED_SW_LAT                  LATAbits.LATA4
#define LED_SW_PORT                 PORTAbits.RA4
#define LED_SW_WPU                  WPUAbits.WPUA4
#define LED_SW_OD                   ODCONAbits.ODCA4
#define LED_SW_ANS                  ANSELAbits.ANSA4
#define LED_SW_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_SW_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_SW_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_SW_GetValue()           PORTAbits.RA4
#define LED_SW_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_SW_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_SW_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_SW_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_SW_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED_SW_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED_SW_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED_SW_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set ADC_IN_RA5 aliases
#define ADC_IN_RA5_TRIS                 TRISAbits.TRISA5
#define ADC_IN_RA5_LAT                  LATAbits.LATA5
#define ADC_IN_RA5_PORT                 PORTAbits.RA5
#define ADC_IN_RA5_WPU                  WPUAbits.WPUA5
#define ADC_IN_RA5_OD                   ODCONAbits.ODCA5
#define ADC_IN_RA5_ANS                  ANSELAbits.ANSA5
#define ADC_IN_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define ADC_IN_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define ADC_IN_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define ADC_IN_RA5_GetValue()           PORTAbits.RA5
#define ADC_IN_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define ADC_IN_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define ADC_IN_RA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define ADC_IN_RA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define ADC_IN_RA5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define ADC_IN_RA5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define ADC_IN_RA5_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define ADC_IN_RA5_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/