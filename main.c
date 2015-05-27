
#include <cog.h>
#include <propeller.h>
#include "bithelper.h"


int main(void)
{

  //bits 0..7 touch button inputs
  DIRA = 0xffffff00;

  //bits 16..23 lED outputs
#define led_mask 0x00ff0000


  while (1) {
    // read P0..P7
    int buttons = INA & 0xFF;

    // write buttons to P16..P23 and leave other bits untouched
    OUTA = (OUTA & ~led_mask) | buttons<<16;
  }
}
