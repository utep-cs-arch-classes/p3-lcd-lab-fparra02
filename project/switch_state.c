#include "draw_shapes.h"
#include "switches.h"

void state(void){
  switch(switch_state){
  case 0: break;
  case 1:
    draw_SI1(37);
    draw_SI1(75);
    draw_SI1(100);
    draw_SI1(82);
    break;
  case 2:
    clear_SI3(120);
    draw_SI3(60);
    break;
  case 3: draw_SI2(90);break;
  case 4:
    clear_SI3(60);
    draw_SI3(120);
    break;
  }
  return;
}
