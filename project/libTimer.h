#ifndef libTimer_included
#define libTimer_included

void configureClocks();
void enableWDTInterrupts();
void timerAUmode();

unsigned char gert_sr();
void set_sr(), or_sr(), and_sr();

#endif // included
