#include "core/system.h"

int main(void) {
    uint32_t Nloop = 84000000 / 4;
    for (uint32_t i = 0; i < Nloop; i++) {
        __asm__("nop");
    }
    
    return 0;
}