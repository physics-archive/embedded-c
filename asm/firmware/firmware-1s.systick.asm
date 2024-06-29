@ Firmware v1.5 -- Blinker with 1s frequency using systick & interrupts.
Dump of assembler code for function main:
   0x00000000 <+0>:     push    {r4, r5, r6, lr}
   0x00000002 <+2>:     bl      0x2 <main+2>
   0x00000006 <+6>:     mov.w   r0, #1536       @ 0x600
   0x0000000a <+10>:    bl      0xa <main+10>
   0x0000000e <+14>:    ldr     r0, [pc, #60]   @ (0x4c <main+76>)
   0x00000010 <+16>:    ldr     r6, [pc, #56]   @ (0x4c <main+76>)
   0x00000012 <+18>:    movs    r3, #32
   0x00000014 <+20>:    movs    r2, #0
   0x00000016 <+22>:    movs    r1, #1
   0x00000018 <+24>:    bl      0x18 <main+24>
   0x0000001c <+28>:    bl      0x1c <main+28>
   0x00000020 <+32>:    mov     r4, r0
   0x00000022 <+34>:    mov     r5, r1
   0x00000024 <+36>:    bl      0x24 <main+36>
   0x00000028 <+40>:    subs    r0, r0, r4
   0x0000002a <+42>:    sbc.w   r1, r1, r5
   0x0000002e <+46>:    cmp.w   r0, #1000       @ 0x3e8
   0x00000032 <+50>:    sbcs.w  r1, r1, #0
   0x00000036 <+54>:    bcc.n   0x24 <main+36>
   0x00000038 <+56>:    movs    r1, #32
   0x0000003a <+58>:    mov     r0, r6
   0x0000003c <+60>:    bl      0x3c <main+60>
   0x00000040 <+64>:    bl      0x40 <main+64>
   0x00000044 <+68>:    mov     r4, r0
   0x00000046 <+70>:    mov     r5, r1
   0x00000048 <+72>:    b.n     0x24 <main+36>
   0x0000004a <+74>:    nop
   0x0000004c <+76>:    movs    r0, r0
   0x0000004e <+78>:    ands    r2, r0
End of assembler dump.