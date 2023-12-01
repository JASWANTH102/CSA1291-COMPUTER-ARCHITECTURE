
;<Program title>

jmp start

;data


;code
start: nop

LXI H, 2200H   ; Load the HL pair register with the address 2200H of memory                                       location
MOV B, M       ; Copy the content of memory (2200H) into register B (Get the                                       dividend).
INX H               ; Increment register pair H-L.
MOV C, M       ; Copy the contents of memory into accumulator (Get the divisor).

MVI D,00H      ; Initialize counter to store Quotient.

MOV A, B        ; Get dividend in accumulator.

LOOP: SUB C   ; Subtract the content of accumulator with register C and store the                              result in accumulator. 
INR D               ; Increment the register D. 
CMP C              ; Compare the contents of accumulator and register C. 
JNC LOOP        ; Jump to Loop if carry flag is not set. 
STA 2203H      ; Store the remainder at memory location 2203. 
MOV A, D        ; Copy the content of register into accumulator. 
STA 2202H      ; Store the quotient at memory location 2202. 
HLT    
hlt
