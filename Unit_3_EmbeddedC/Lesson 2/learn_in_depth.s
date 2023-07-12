
learn_in_depth.elf:     file format elf32-littlearm


Disassembly of section .startup:

00010000 <reset>:
   10000:	e59fd004 	ldr	sp, [pc, #4]	; 1000c <stop+0x4>
   10004:	eb000015 	bl	10060 <main>

00010008 <stop>:
   10008:	eafffffe 	b	10008 <stop>
   1000c:	00011140 	andeq	r1, r1, r0, asr #2

Disassembly of section .txt:

00010010 <uart_send_str>:
   10010:	e52db004 	push	{fp}		; (str fp, [sp, #-4]!)
   10014:	e28db000 	add	fp, sp, #0
   10018:	e24dd00c 	sub	sp, sp, #12
   1001c:	e50b0008 	str	r0, [fp, #-8]
   10020:	ea000006 	b	10040 <uart_send_str+0x30>
   10024:	e59f3030 	ldr	r3, [pc, #48]	; 1005c <uart_send_str+0x4c>
   10028:	e51b2008 	ldr	r2, [fp, #-8]
   1002c:	e5d22000 	ldrb	r2, [r2]
   10030:	e5832000 	str	r2, [r3]
   10034:	e51b3008 	ldr	r3, [fp, #-8]
   10038:	e2833001 	add	r3, r3, #1
   1003c:	e50b3008 	str	r3, [fp, #-8]
   10040:	e51b3008 	ldr	r3, [fp, #-8]
   10044:	e5d33000 	ldrb	r3, [r3]
   10048:	e3530000 	cmp	r3, #0
   1004c:	1afffff4 	bne	10024 <uart_send_str+0x14>
   10050:	e28bd000 	add	sp, fp, #0
   10054:	e8bd0800 	ldmfd	sp!, {fp}
   10058:	e12fff1e 	bx	lr
   1005c:	101f1000 	andsne	r1, pc, r0

00010060 <main>:
   10060:	e92d4800 	push	{fp, lr}
   10064:	e28db004 	add	fp, sp, #4
   10068:	e59f0004 	ldr	r0, [pc, #4]	; 10074 <main+0x14>
   1006c:	ebffffe7 	bl	10010 <uart_send_str>
   10070:	e8bd8800 	pop	{fp, pc}
   10074:	00010078 	andeq	r0, r1, r8, ror r0

Disassembly of section .data:

00010078 <str>:
   10078:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   1007c:	6e695f6e 	cdpvs	15, 6, cr5, cr9, cr14, {3}
   10080:	7065645f 	rsbvc	r6, r5, pc, asr r4
   10084:	3c3a6874 	ldccc	8, cr6, [sl], #-464	; 0xfffffe30
   10088:	65726154 	ldrbvs	r6, [r2, #-340]!	; 0x154
   1008c:	00003e6b 	andeq	r3, r0, fp, ror #28
	...

Disassembly of section .rodata:

000100dc <str1>:
   100dc:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   100e0:	6e695f6e 	cdpvs	15, 6, cr5, cr9, cr14, {3}
   100e4:	7065645f 	rsbvc	r6, r5, pc, asr r4
   100e8:	3c3a6874 	ldccc	8, cr6, [sl], #-464	; 0xfffffe30
   100ec:	65726154 	ldrbvs	r6, [r2, #-340]!	; 0x154
   100f0:	00003e6b 	andeq	r3, r0, fp, ror #28
	...

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002d41 	andeq	r2, r0, r1, asr #26
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000023 	andeq	r0, r0, r3, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0x109
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	Address 0x0000002c is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <stack_top+0x10bfbe4>
   4:	4e472820 	cdpmi	8, 4, cr2, cr7, cr0, {1}
   8:	34202955 	strtcc	r2, [r0], #-2389	; 0x955
   c:	322e372e 	eorcc	r3, lr, #12058624	; 0xb80000
	...
