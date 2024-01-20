#include "armstrong_numbers.h"
#include <math.h>
#include <stdbool.h>

bool is_armstrong_number(int candidate) {
  if (candidate == 0) {
    return true;
  }

  if (candidate < 10) {
    return true;
  }

  int num_digits = 0;
  int original = candidate;
  while (candidate > 0) {
    num_digits++;
    candidate /= 10;
  }

  candidate = original;

  int sum = 0;
  while (candidate > 0) {
    int num = candidate % 10;
    sum += pow(num, num_digits);

    candidate /= 10;
  }

  if (sum == original) {
    return true;
  }

  return false;
}
