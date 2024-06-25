//Firmware 2024.06.24
#include <libopencm3/stm32/f4/rcc.h>
#include <libopencm3/stm32/f4/gpio.h>
#include "core/system.h"

#define LED_PORT    (GPIOA)
#define LED_PIN     (GPIO5)

/////////////////////////////
///    APPLICATION CFG    ///
/////////////////////////////

static void gpio_setup(void) {
    rcc_periph_clock_enable(RCC_GPIOA);
    gpio_mode_setup(LED_PORT,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,LED_PIN);
}

/////////////////////////////
///      APPLICATION      ///
/////////////////////////////

// Configure Microcontroller
int main(void) {
    system_setup();
    gpio_setup();
    uint64_t start_time = system_get_ticks();

    //Execute Application
    while (1) {
        if (system_get_ticks() - start_time >= 1000) {
            gpio_toggle(LED_PORT,LED_PIN);
            start_time = system_get_ticks();
        }
    }

    return 0;
}