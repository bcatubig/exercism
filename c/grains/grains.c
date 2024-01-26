#include "grains.h"

uint64_t square(uint8_t index) {
  // 1 - 1
  // 2 - 2
  // 3 - 4
  // 4 - 8
  // 16 - 32768
  // 32 - 2147483648

  if (index == 0) {
    return 0;
  }

  if (index == 1) {
    return 1;
  }

  return square(index - 1) * 2;
}

uint64_t total(void) {
  uint64_t result = 0;

  for (int i = 1; i <= 64; i++) {
    result += square(i);
  }

  return result;
}
