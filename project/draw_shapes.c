#include <msp430.h>
#include "draw_shapes.h"
#include "switches.h"
#include "buzzer.h"


short drawPos[2] = {10,10}, controlPos[2] = {10,10};
short velocity[2] = {3,8}, limits[2] = {screenWidth-36, screenHeight-8};

short redrawScreen = 1;

u_int controlFontColor = COLOR_RED;



void
draw_SI1(u_int center){
  fillRectangle((center-5), (center-2),1,4,COLOR_GREEN);
  fillRectangle((center-4), (center),1,3,COLOR_GREEN);
  fillRectangle((center-4), (center+4),1,1,COLOR_GREEN);
  fillRectangle((center-3), (center-1),1,5,COLOR_GREEN);
  fillRectangle((center-3), (center-3),1,1, COLOR_GREEN);
  fillRectangle((center-2), (center-2),1,5, COLOR_GREEN);
  fillRectangle((center-2), (center),1,1, COLOR_RED);
  fillRectangle((center-1), (center-1),1,4, COLOR_GREEN);
  fillRectangle((center), (center-1),1,4, COLOR_GREEN);
  fillRectangle((center+1), (center-1),1,4,COLOR_GREEN);
  fillRectangle((center+2), (center-2),1,5,COLOR_GREEN);
  fillRectangle((center+2), (center),1,1,COLOR_RED);
  fillRectangle((center+3), (center-3),1,1,COLOR_GREEN);
  fillRectangle((center+3), (center-1),1,5,COLOR_GREEN);
  fillRectangle((center+4), (center),1,3,COLOR_GREEN);
  fillRectangle((center+4), (center+4),1,1,COLOR_GREEN);
  fillRectangle((center+5), (center-2),1,4,COLOR_GREEN);
}

void
draw_SI2(u_int center){
  fillRectangle((center-5), (center+3),1,4,COLOR_YELLOW);
  fillRectangle((center-4), (center+1),1,3,COLOR_YELLOW);
  fillRectangle((center-3), (center-1),1,5,COLOR_YELLOW);
  fillRectangle((center-3), (center-3),1,1,COLOR_YELLOW);
  fillRectangle((center-2), (center-2),1,5, COLOR_YELLOW);
  fillRectangle((center-2), (center),1,1, COLOR_RED);
  fillRectangle((center-1), (center-1),1,4,COLOR_YELLOW);
  fillRectangle((center), (center-1),1,4, COLOR_YELLOW);
  fillRectangle((center+1), (center-1),1,4, COLOR_YELLOW);
  fillRectangle((center+2), (center-2),1,5, COLOR_YELLOW);
  fillRectangle((center+2), (center),1,1, COLOR_RED);
  fillRectangle((center+3), (center-1),1,5, COLOR_YELLOW);
  fillRectangle((center+3), (center-3),1,1, COLOR_YELLOW);
  fillRectangle((center+4), (center+1),1,3, COLOR_YELLOW);
  fillRectangle((center+5), (center+3),1,4, COLOR_YELLOW);
}
void
clear_SI3(u_int center){
  fillRectangle((center-3), (center), 1,5, COLOR_BLUE);
  fillRectangle((center-2), (center-1), 1,3, COLOR_BLUE);
  fillRectangle((center-1), (center-2),1,7, COLOR_BLUE);
  fillRectangle((center), (center-3),1,7,COLOR_BLUE);
  fillRectangle((center+1), (center-3), 1,7, COLOR_BLUE);
  fillRectangle((center+2), (center-2),1,7, COLOR_BLUE);
  fillRectangle((center+3), (center-1),1,3, COLOR_BLUE);
  fillRectangle((center+4), (center),1,5, COLOR_BLUE);
}  
void
draw_SI3(u_int center){
  
  fillRectangle((center-3), (center),1,5, COLOR_PINK);
  fillRectangle((center-2), (center-1),1,3, COLOR_PINK);
  fillRectangle((center-1), (center-2),1,7, COLOR_PINK);
  fillRectangle((center), (center-3),1,7, COLOR_PINK);
  fillRectangle((center+1), (center-3),1,7, COLOR_PINK);
  fillRectangle((center+2), (center-2),1,7, COLOR_PINK);
  fillRectangle((center+3), (center-1),1,3, COLOR_PINK);
  fillRectangle((center+4), (center),1,5, COLOR_PINK);
}
