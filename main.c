
#include <cog.h>
#include <propeller.h>
#include "bithelper.h"

int main(void)
{

  pinOutput(16);
  pinInput(0);
  bitSet(OUTA, 16);

  while (1) {
    if (bit(INA, 0)) {
      bitSet(OUTA, 16);
    } else {
      bitClear(OUTA, 16);
    }
  }
}
