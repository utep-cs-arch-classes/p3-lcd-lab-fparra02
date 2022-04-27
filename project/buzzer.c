#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"
#include "switches.h"

static int counter1= 0;

void buzzer_init(){

  /* Timer A output "TA0.1" -----> P2.6. (output)
     
     P2SEL2.6
     P2SEL2.7 -------> all 0
     P2SEL.7
     P2SEL.6 -------> 1
     
  */

  timerAUpmode();  /* drive speaker */
  P2SEL &= ~(BIT6 | BIT7);
  P2SEL &= ~BIT7;
  P2SEL |= BIT6;
  P2DIR = BIT6; // (P2.6)

}

void buzzer_set_period(short cycles){
  CCR0 = cycles;
  CCR1 = cycles >> 1;
}

void tone_1(){
  switch(counter1){
  case 0: buzzer_set_period(450); counter1++; break;
  case 1:
  case 2: buzzer_set_period(800); counter1++; break;
  case 3:
  case 4:
  case 5: buzzer_set_period(1000); counter1++; break;
  case 6:
  case 7: buzzer_set_period(650); counter1++; break;
  case 8: buzzer_set_period(800); counter1++; break;
  case 9:
  case 10: buzzer_set_period(200); counter1++; break;
  case 11:
  case 12: buzzer_set_period(250);
    if (counter1 == 12){
      counter1 = 0;
    }
    else{
      counter1++;
    }
    break;
  }
}
