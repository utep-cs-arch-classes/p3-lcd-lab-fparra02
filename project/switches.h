
#ifndef _SWITCHES_H_
#define _SWITCHES_H_

#define LED BIT6

#define SW1 1
#define SW2 2
#define SW3 4
#define SW4 8

#define SWITCHES 15

void switch_init(void);
void switch_interrupt_handler(void);
void state(void);

extern int switches, switch_pressed, switch_state;
extern char switch_state_down, switch_state_changed, tempo;

#endif
