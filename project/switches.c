#include <msp430.h>
#include "switches.h"
#include "buzzer.h"
#include "libTimer.h"

char switch_state_down, switch_state_changed, tempo;

static char switch_update_interrupt_sense(){
  char val = P2IN;
  /* update switch to detect changes from button */

  P2IES |= (val & SWITCHES); /* switch up sense down */
  P2IES &= (val | ~SWITCHES); /* switch down sense up */
  return val;
}

void switch_init(){
  /* sets up switch */

  P2REN |= SWITCHES; /* resistors */
  P2IE = SWITCHES; /* interrupts */
  P2OUT |= SWITCHES; /* pulls up */
  P2DIR &= ~SWITCHES; /* sets switches bits for inputs */
}

void switch_interrupt_handler(){
  char p2val = switch_update_interrupt_sense();
  if(!(p2val & SW1)){ /* play tone1 while pressing SW1 */
      tempo= 25;
      tone_1();
      switch_state_down= 1;
  }
  switch_state_changed= 1;
}

    
    