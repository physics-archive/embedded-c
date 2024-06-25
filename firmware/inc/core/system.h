#ifndef INC_SYSTEM_H
#define INC_SYSTEM_H
#include "common-defines.h"

//#define LED_PORT      (GPIOA)
//#define LED_PIN       (GPIO5)

#define CPU_FREQ      (84000000) // Hz
#define SYSTICK_FREQ  (1000)     // ms

void system_setup(void);
uint64_t system_get_ticks(void);

#endif // INC_SYSTEM_H