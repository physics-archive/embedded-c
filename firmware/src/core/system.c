// System file dev 2024.06.24
#include "core/system.h"

#include <libopencm3/stm32/f4/rcc.h>
#include <libopencm3/cm3/systick.h>
#include <libopencm3/cm3/vector.h>

// Private function remains static
static void rcc_setup(void) {
    rcc_clock_setup_pll(&rcc_hsi_configs[RCC_CLOCK_3V3_84MHZ]);
}

volatile uint64_t ticks = 0;
void sys_tick_handler(void) {
    ticks++;
}

uint64_t system_get_ticks(void) {
    return ticks;
}

static void systick_setup(void) {
    systick_set_frequency(SYSTICK_FREQ,CPU_FREQ);
    systick_counter_enable();
    systick_interrupt_enable();
}

void system_setup(void) {
    rcc_setup();
    systick_setup();
}