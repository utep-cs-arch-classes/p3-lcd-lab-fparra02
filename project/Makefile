COMMON_OBJECTS = game.o wdtInterruptHandler.o interruptHandler.o draw_shapes.o switches.o buzzer.o text.o state_machine.o

CPU      = msp430g2553

CFLAGS = -mmcu=${CPU} -Os -I../h
LDFLAGS = -L../lib -L/opt/ti/msp430_gcc/include/

CC = msp430-elf-gcc
AS = msp430-elf-gcc -mmcu=${CPU} -c

all: game.c

game.elf: ${COMMON_OBJECTS} switch_state.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd

load: game.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf

#game.o: state_machine.h

#wdtInterruptHandler.o: state_machine.h

#interruptHandler.o: switches.h

#draw_shapes.o: draw_shapes.h

#state_machine.o: state_machine.h

#switches.o: switches.h

buzzer.o: buzzer.h

text.o: state_machine.h

switch_state.o: switch_state.c state_machine.h
