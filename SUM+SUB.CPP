// 1. addition of two 8 bit number
mvi a,02
mvi b,01
add b
mov c,a
hlt

// 2. addition of two 8 bit no. and stored in register
LXI H,3000H
MOV A,M
INX H
ADD M
MOV B,A
HLT

// 3. addition of two 8 bit no. and stored in memory
LXI H,3000H
MOV A,M
INX H
MOV B,M
ADD B
INX H
MOV M,A
HLT

// 4. add three 8 bit no. without carry from memory location and store in a system
LXI H,3000H
MOV A,M
INX H
MOV B,M
ADD B
INX H
MOV B,M
ADD B
MOV C,A
HLT

// 5. Addition of three 8-bit numbers using memory (with carry)

LXI H,2000H
MOV A,M
INX H
MOV B,M
ADD B
JNC SKIP
INR C
SKIP:
INX H
MOV M,A
HLT


// 6. Subtract two 8-bit numbers from memory (without borrow)

LXI H,2000H
MOV A,M
INX H
MOV B,M
SUB B
INX H
MOV M,A
HLT

// 7. Subtract two 8-bit numbers from memory (using borrow)

LXI H,2000H
MOV A,M
INX H
MOV B,M
MVI C,00
SUB B
JNC SKIP
INR C
SKIP:
INX H
MOV M,A
HLT