//Firmware 2024.06.18
#include <libopencm3/stm32/f4/rcc.h>
#include <libopencm3/stm32/f4/gpio.h>

#define LED_PORT (GPIOA)
#define LED_PIN (GPIO5)

static void rcc_setup(void) {
    rcc_clock_setup_pll(&rcc_hsi_configs[RCC_CLOCK_3V3_84MHZ]);
}

static void gpio_setup(void) {
    // Turn on the clock for a given periphereal
    rcc_periph_clock_enable(RCC_GPIOA);

    // Configure the LED pin. Send output to Port A
    gpio_mode_setup(LED_PORT,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,LED_PIN);
}

static void maintain_frequency_standard(uint32_t cycles) {
    // 84MHZ cycles requires blank clock cycles
    //At least 3-4 cpu cycles per loop. 
    for (uint32_t i = 0; i < cycles; i++) {
        __asm__("nop");
    }
}

int main(void) {
    rcc_setup();
    gpio_setup();

    while (1) {
        // Turn the LED on and then off at freq (f)
        gpio_toggle(LED_PORT,LED_PIN);
        maintain_frequency_standard(84000000 / 6);
    }

    return 0;
}

//LD2 - LED