#include "text.h"
#include "state_machine.h"
#include "switches.h"
#include "draw_shapes.h"
#include "buzzer.h"


static int text_counter = 0;

void text(void){
  text_counter++;

  if(text_counter == 1){
    clearScreen(COLOR_BLUE);
    draw_SI1(30);
    buzzer_set_period(1000);
    char txt[] = "Aliens";
    drawString5x7(55,100, txt, COLOR_RED, COLOR_BLUE);
  }
  else if(text_counter > 15 && text_counter < 17){
    buzzer_set_period(0);
    draw_SI1(30);
  }
  else if (text_counter > 17 && text_counter < 32){
    draw_SI2(30);
    buzzer_set_period(2000);
    char txt[] = "are";
    drawString5x7(55,110, txt, COLOR_RED, COLOR_BLUE);
  }
  else if (text_counter > 32 && text_counter < 34){
    draw_SI2(30);
    buzzer_set_period(0);
  }
  else if (text_counter > 34 && text_counter < 50){
    draw_SI3(30);
    buzzer_set_period(3000);
    char txt[] = "here";
    drawString5x7(55,120, txt, COLOR_RED, COLOR_BLUE);
  }
  else if(text_counter > 50){
    clearScreen(COLOR_BLUE);
    text_counter = 0;
    buzzer_set_period(0);
  }
}
