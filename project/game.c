#include <msp430.h>
#include <libTimer.h>
#include <lcdutils.h>
#include "lcddraw.h"
#include "draw_shapes.h"
#include "buzzer.h"
#include "text.h"
#include "state_machine.h"


void main(){
  P1DIR |= LED;
  P1OUT |= LED;
  configureClocks();
  lcd_init();
  switch_init();
  buzzer_init();

  enableWDTInterrupts();
  or_sr(0x8);

  clearScreen(COLOR_BLUE);
  if(count){
    text();
    count = 0;
  }
  P1OUT &= ~LED;
  or_sr(0x10);
  P1OUT |= LED;
}
