.ORIG x3000

LD	R1, NUM1
LD	R2, NUM2

ADD	R3, R1, R2

NOT	R4, R2
ADD	R4, R4, #1
ADD	R4, R1, R4

AND	R5, R5, #0

LOOP	AND	R6, R2, #0
	ADD	R6, R6, R1
	ADD	R5, R5, R6
	ADD	R2, R2, #-1
	BRp	LOOP


HALT

NUM1	.FILL #3
NUM2	.FILL #2

.END