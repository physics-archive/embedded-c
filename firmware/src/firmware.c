//Firmware 2024.06.18
#include <libopencm3/stm32/f4/rcc.h>
#include <libopencm3/stm32/f4/gpio.h>
#include <libopencm3/cm3/systick.h>
#include <libopencm3/cm3/vector.h>


#define LED_PORT      (GPIOA)
#define LED_PIN       (GPIO5)

#define CPU_FREQ      (84000000)
#define systick_freq  (1000)

////////////////////////////
///   CONFIGURE PROGRAM   //
////////////////////////////

volatile uint64_t ticks = 0;
void sys_tick_handler(void) {
    ticks++;
}

static uint64_t get_ticks(void) {
    return ticks;
} 
////////////////////////////
///  MICROCONTROLLER CFG  //
////////////////////////////

static void rcc_setup(void) {
    rcc_clock_setup_pll(&rcc_hsi_configs[RCC_CLOCK_3V3_84MHZ]);
}

static void gpio_setup(void) {
    rcc_periph_clock_enable(RCC_GPIOA);
    gpio_mode_setup(LED_PORT,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,LED_PIN);
}

static void systick_setup(void) {
    systick_set_frequency(systick_freq,CPU_FREQ);
    systick_counter_enable();
    systick_interrupt_enable();
}

////////////////////////////
///      APPLICATION      //
////////////////////////////

// Configure Microcontroller
int main(void) {
    rcc_setup();
    gpio_setup();
    systick_setup();
    uint64_t start_time = get_ticks();

    //Execute Application
    while (1) {
        if (get_ticks() - start_time >= 1000) {
            gpio_toggle(LED_PORT,LED_PIN);
            start_time = get_ticks();
        }
    }

    return 0;
}