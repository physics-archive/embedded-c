@ Firmware v1 -- Blinker with 1s frequency using delayed cycles.
Dump of assembler code for function main:
   0x00000000 <+0>:     push    {r3, lr}
   0x00000002 <+2>:     ldr     r0, [pc, #44]   @ (0x30 <main+48>)
   0x00000004 <+4>:     ldr     r4, [pc, #44]   @ (0x34 <main+52>)
   0x00000006 <+6>:     bl      0x6 <main+6>
   0x0000000a <+10>:    mov.w   r0, #1536       @ 0x600
   0x0000000e <+14>:    bl      0xe <main+14>
   0x00000012 <+18>:    ldr     r0, [pc, #32]   @ (0x34 <main+52>)
   0x00000014 <+20>:    movs    r3, #32
   0x00000016 <+22>:    movs    r2, #0
   0x00000018 <+24>:    movs    r1, #1
   0x0000001a <+26>:    bl      0x1a <main+26>
   0x0000001e <+30>:    movs    r1, #32
   0x00000020 <+32>:    mov     r0, r4
   0x00000022 <+34>:    bl      0x22 <main+34>
   0x00000026 <+38>:    ldr     r3, [pc, #16]   @ (0x38 <main+56>)
   0x00000028 <+40>:    nop
   0x0000002a <+42>:    subs    r3, #1
   0x0000002c <+44>:    bne.n   0x28 <main+40>
   0x0000002e <+46>:    b.n     0x1e <main+30>
   0x00000030 <+48>:    movs    r0, r0
   0x00000032 <+50>:    movs    r0, r0
   0x00000034 <+52>:    movs    r0, r0
   0x00000036 <+54>:    ands    r2, r0
   0x00000038 <+56>:    adds    r7, #160        @ 0xa0
   0x0000003a <+58>:    lsls    r0, r4, #2
End of assembler dump.