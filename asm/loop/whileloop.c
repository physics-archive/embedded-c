#include "core/system.h"

int main(void) {
    uint32_t Nloop = 84000000 / 4;
    while (1) {
        for (uint32_t i = 0; i < Nloop; i++) {
            __asm__("nop");
            __asm__("nop");
            __asm__("nop");
        }
        uint32_t b = 40;
    }
    return 0;
}