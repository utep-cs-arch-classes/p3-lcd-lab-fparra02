#include "switches.h"
#include "text.h"
#include "buzzer.h"
#include <libTimer.h>
#include <msp430.h>

char switch_state_down, switch_state_changed, tempo;
int switches = 0;
int switch_pressed = 0;
int switch_state = 0;

static char switch_update_interrupt_sense(){
  char p2val = P2IN;
  P2IES |= (p2val & SWITCHES);
  P2IES &= (p2val | ~SWITCHES);
  return p2val;
}

void switch_init(void){
  P2REN |= SWITCHES;
  P2IE |= SWITCHES;
  P2OUT |= SWITCHES;
  P2DIR &= ~SWITCHES;
  switch_update_interrupt_sense();
}

void switch_interrupt_handler(void){
  char p2val = switch_update_interrupt_sense();
  switches = ~p2val & SWITCHES;

  if(!(p2val & SW1)){
    
    tempo = 25;
    //tone_1();
    switch_state = 1;
    switch_state_down= 1;
  }
  
  else if(!(p2val & SW2)){
    tempo = 50;
    tone_2();
    switch_state = 2;
    switch_state_down = 1;
  }
  
  else if(!(p2val & SW3)){
    tempo = 75;
    tone_3();
    switch_state = 3;
    switch_state_down = 1;
  }
  
  else if(!(p2val & SW4)){
    tempo = 100;
    tone_4();
    switch_state = 4;
    switch_state_down = 1;
  }
  switch_state_changed= 1;
  state();
}

  
  
