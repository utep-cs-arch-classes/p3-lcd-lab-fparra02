#include "state_machine.h"
#include "switches.h"
#include "draw_shapes.h"
#include "buzzer.h"
#include "text.h"

unsigned int count = 1;
static int text_counter = 0;

void run(void){
  if(count){
    text();
  }
}
