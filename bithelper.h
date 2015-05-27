#ifndef BITHELPER_H
#define BITHELPER_H


#define bit(dest, b)         (((dest) >> (b)) & 1)
#define bitSet(dest, b)      (dest) |= 1<<(b)
#define bitClear(dest, b)    (dest) &= ~(1<<(b))
#define bitToggle(dest, b)   (dest) ^= 1<<(b)

#define pinInput(pinNumber)    bitClear(DIRA, pinNumber)
#define pinOutput(pinNumber)   bitSet(DIRA, pinNumber)


#endif
