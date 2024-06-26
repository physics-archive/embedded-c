int main(void) {
    int Nloop = 84000000 / 4;
    for (int i = 0; i < Nloop; i++) {
        __asm__("nop");
    }
}