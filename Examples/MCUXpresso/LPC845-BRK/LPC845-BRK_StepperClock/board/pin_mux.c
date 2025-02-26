/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v11.0
processor: LPC845
package_id: LPC845M301JBD48
mcu_data: ksdk2_0
processor_version: 11.0.1
pin_labels:
- {pin_num: '14', pin_signal: PIO1_1/CAPT_X2, label: LED_BLUE, identifier: LEDpin2}
- {pin_num: '11', pin_signal: PIO1_0/CAPT_X1, label: LED_GREEN, identifier: LEDpin1}
- {pin_num: '16', pin_signal: PIO1_2/CAPT_X3, label: LED_RED, identifier: LEDpin3}
- {pin_num: '6', pin_signal: PIO0_4/ADC_11, label: BTN_K3, identifier: BTNpin3}
- {pin_num: '4', pin_signal: PIO0_12, label: BTN_K1, identifier: BTNpin1}
- {pin_num: '20', pin_signal: PIO0_24, label: USART0_RX}
- {pin_num: '19', pin_signal: PIO0_25, label: USART0_TX}
- {pin_num: '15', pin_signal: PIO0_16, label: MAG_HH, identifier: MAG_HH}
- {pin_num: '48', pin_signal: PIO0_17/ADC_9/DACOUT_0, label: MAG_MM, identifier: MAG_MM}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '11', peripheral: GPIO, signal: 'PIO1, 0', pin_signal: PIO1_0/CAPT_X1, direction: OUTPUT, gpio_init_state: 'false', mode: inactive}
  - {pin_num: '14', peripheral: GPIO, signal: 'PIO1, 1', pin_signal: PIO1_1/CAPT_X2, direction: OUTPUT, mode: inactive}
  - {pin_num: '16', peripheral: GPIO, signal: 'PIO1, 2', pin_signal: PIO1_2/CAPT_X3, direction: OUTPUT, mode: inactive}
  - {pin_num: '6', peripheral: GPIO, signal: 'PIO0, 4', pin_signal: PIO0_4/ADC_11, direction: INPUT, mode: inactive}
  - {pin_num: '4', peripheral: GPIO, signal: 'PIO0, 12', pin_signal: PIO0_12, direction: INPUT, mode: inactive}
  - {pin_num: '15', peripheral: GPIO, signal: 'PIO0, 16', pin_signal: PIO0_16, direction: INPUT}
  - {pin_num: '48', peripheral: GPIO, signal: 'PIO0, 17', pin_signal: PIO0_17/ADC_9/DACOUT_0, direction: INPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M0P */
void BOARD_InitPins(void)
{
    /* Enables clock for IOCON.: enable */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);
    /* Enables the clock for the GPIO1 module */
    CLOCK_EnableClock(kCLOCK_Gpio1);

    gpio_pin_config_t BTNpin3_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U,
    };
    /* Initialize GPIO functionality on pin PIO0_4 (pin 6)  */
    GPIO_PinInit(BOARD_INITPINS_BTNpin3_GPIO, BOARD_INITPINS_BTNpin3_PORT, BOARD_INITPINS_BTNpin3_PIN, &BTNpin3_config);

    gpio_pin_config_t BTNpin1_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U,
    };
    /* Initialize GPIO functionality on pin PIO0_12 (pin 4)  */
    GPIO_PinInit(BOARD_INITPINS_BTNpin1_GPIO, BOARD_INITPINS_BTNpin1_PORT, BOARD_INITPINS_BTNpin1_PIN, &BTNpin1_config);

    gpio_pin_config_t MAG_HH_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U,
    };
    /* Initialize GPIO functionality on pin PIO0_16 (pin 15)  */
    GPIO_PinInit(BOARD_INITPINS_MAG_HH_GPIO, BOARD_INITPINS_MAG_HH_PORT, BOARD_INITPINS_MAG_HH_PIN, &MAG_HH_config);

    gpio_pin_config_t MAG_MM_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U,
    };
    /* Initialize GPIO functionality on pin PIO0_17 (pin 48)  */
    GPIO_PinInit(BOARD_INITPINS_MAG_MM_GPIO, BOARD_INITPINS_MAG_MM_PORT, BOARD_INITPINS_MAG_MM_PIN, &MAG_MM_config);

    gpio_pin_config_t LEDpin1_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U,
    };
    /* Initialize GPIO functionality on pin PIO1_0 (pin 11)  */
    GPIO_PinInit(BOARD_INITPINS_LEDpin1_GPIO, BOARD_INITPINS_LEDpin1_PORT, BOARD_INITPINS_LEDpin1_PIN, &LEDpin1_config);

    gpio_pin_config_t LEDpin2_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U,
    };
    /* Initialize GPIO functionality on pin PIO1_1 (pin 14)  */
    GPIO_PinInit(BOARD_INITPINS_LEDpin2_GPIO, BOARD_INITPINS_LEDpin2_PORT, BOARD_INITPINS_LEDpin2_PIN, &LEDpin2_config);

    gpio_pin_config_t LEDpin3_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U,
    };
    /* Initialize GPIO functionality on pin PIO1_2 (pin 16)  */
    GPIO_PinInit(BOARD_INITPINS_LEDpin3_GPIO, BOARD_INITPINS_LEDpin3_PORT, BOARD_INITPINS_LEDpin3_PIN, &LEDpin3_config);

    IOCON->PIO[2] = ((IOCON->PIO[2] &
                      /* Mask bits to zero which are setting */
                      (~(IOCON_PIO_MODE_MASK)))

                     /* Selects function mode (on-chip pull-up/pull-down resistor control).: Inactive. Inactive (no
                      * pull-down/pull-up resistor enabled). */
                     | IOCON_PIO_MODE(PIO0_12_MODE_INACTIVE));

    IOCON->PIO[4] = ((IOCON->PIO[4] &
                      /* Mask bits to zero which are setting */
                      (~(IOCON_PIO_MODE_MASK)))

                     /* Selects function mode (on-chip pull-up/pull-down resistor control).: Inactive. Inactive (no
                      * pull-down/pull-up resistor enabled). */
                     | IOCON_PIO_MODE(PIO0_4_MODE_INACTIVE));

    IOCON->PIO[36] = ((IOCON->PIO[36] &
                       /* Mask bits to zero which are setting */
                       (~(IOCON_PIO_MODE_MASK)))

                      /* Selects function mode (on-chip pull-up/pull-down resistor control).: Inactive. Inactive (no
                       * pull-down/pull-up resistor enabled). */
                      | IOCON_PIO_MODE(PIO1_0_MODE_INACTIVE));

    IOCON->PIO[37] = ((IOCON->PIO[37] &
                       /* Mask bits to zero which are setting */
                       (~(IOCON_PIO_MODE_MASK)))

                      /* Selects function mode (on-chip pull-up/pull-down resistor control).: Inactive. Inactive (no
                       * pull-down/pull-up resistor enabled). */
                      | IOCON_PIO_MODE(PIO1_1_MODE_INACTIVE));

    IOCON->PIO[38] = ((IOCON->PIO[38] &
                       /* Mask bits to zero which are setting */
                       (~(IOCON_PIO_MODE_MASK)))

                      /* Selects function mode (on-chip pull-up/pull-down resistor control).: Inactive. Inactive (no
                       * pull-down/pull-up resistor enabled). */
                      | IOCON_PIO_MODE(PIO1_2_MODE_INACTIVE));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
