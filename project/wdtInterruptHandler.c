#include "draw_shapes.h"
#include "state_machine.h"
#include "text.h"



void wdt_c_handler(void){
  static int sCount = 0;
  sCount++;

  if (sCount >= 10){
    sCount = 0;
    count = 1;
  }
}

