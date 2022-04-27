#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "draw_shapes.h"
#include "buzzer.h"
#include "switches.h"

void main(){
  configureClocks();
  switch_init();
  buzzer_init();
  enableWDTInterrupts();
  lcd_init();

  // clear screen
  clearScreen(COLOR_BLUE);

  // space invaders

  draw_space_invader(30);
  draw_space_invader2(60);
  draw_space_invader3(90);

  or_sr(0x18);  /** CPU OFF */
}