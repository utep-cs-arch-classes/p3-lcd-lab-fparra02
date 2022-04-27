#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"


void
draw_space_invader(int c){
  int center = c;

  fillRectangle((center-5),(center-2),1,4,COLOR_GREEN);
  fillRectangle((center-4),(center),1,3,COLOR_GREEN);
  fillRectangle((center-4),(center+4),1,1,COLOR_GREEN);
  fillRectangle((center-3),(center-1),1,5,COLOR_GREEN);
  fillRectangle((center-3),(center-3),1,1,COLOR_GREEN);
  fillRectangle((center-2),(center-2),1,5,COLOR_GREEN);
  fillRectangle((center-2),(center),1,1,COLOR_RED);
  fillRectangle((center-1),(center-1),1,4,COLOR_GREEN);
  fillRectangle((center),(center-1),1,4,COLOR_GREEN);
  fillRectangle((center+1),(center-1),1,4,COLOR_GREEN);
  fillRectangle((center+2),(center-2),1,5,COLOR_GREEN);
  fillRectangle((center+2),(center),1,1,COLOR_RED);
  fillRectangle((center+3),(center-3),1,1,COLOR_GREEN);
  fillRectangle((center+3),(center-1),1,5,COLOR_GREEN);
  fillRectangle((center+4),(center),1,3,COLOR_GREEN);
  fillRectangle((center+4),(center+4),1,1,COLOR_GREEN);
  fillRectangle((center+5),(center-2),1,4,COLOR_GREEN);
}

void
draw_space_invader2(int c){
  int center = c;

  fillRectangle((center-5),(center+3),1,4,COLOR_YELLOW);
  fillRectangle((center-4),(center+1),1,3,COLOR_YELLOW);
  fillRectangle((center-3),(center-1),1,5,COLOR_YELLOW);
  fillRectangle((center-3),(center-3),1,1,COLOR_YELLOW);
  fillRectangle((center-2),(center-2),1,5,COLOR_YELLOW);
  fillRectangle((center-2),(center),1,1,COLOR_RED);
  fillRectangle((center-1),(center-1),1,4,COLOR_YELLOW);
  fillRectangle((center),(center-1),1,4,COLOR_YELLOW);
  fillRectangle((center+1),(center-1),1,4,COLOR_YELLOW);
  fillRectangle((center+2),(center-2),1,5,COLOR_YELLOW);
  fillRectangle((center+2),(center),1,1,COLOR_RED);
  fillRectangle((center+3),(center-1),1,5,COLOR_YELLOW);
  fillRectangle((center+3),(center-3),1,1,COLOR_YELLOW);
  fillRectangle((center+4),(center+1),1,3,COLOR_YELLOW);
  fillRectangle((center+5),(center+3),1,4,COLOR_YELLOW);
}

void
draw_space_invader3(int c){
  int center = c;

  fillRectangle((center-3),(center),1,5,COLOR_PINK);
  fillRectangle((center-2),(center-1),1,3,COLOR_PINK);
  fillRectangle((center-1),(center-2),1,7,COLOR_PINK);
  fillRectangle((center),(center-3),1,7,COLOR_PINK);
  fillRectangle((center+1),(center-3),1,7,COLOR_PINK);
  fillRectangle((center+2),(center-2),1,7,COLOR_PINK);
  fillRectangle((center+3),(center-1),1,3,COLOR_PINK);
  fillRectangle((center+4),(center),1,5,COLOR_PINK);
  fillRectangle((center-1),(center),1,1,COLOR_RED);
  fillRectangle((center+2),(center),1,1,COLOR_RED);
  fillRectangle((center),(center+2),1,1,COLOR_RED);
  fillRectangle((center+1),(center+2),1,1,COLOR_RED);
}