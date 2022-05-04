#ifndef _DRAW_SHAPES_H
#define _DRAW_SHAPES_H_

#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "switches.h"

extern short redrawScreen;

void draw_SI1(u_int center);
void draw_SI2(u_int center);
void draw_SI3(u_int center);

#endif

