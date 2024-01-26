#include "hamming.h"
#include <string.h>
int compute(const char *lhs, const char *rhs) {
  int diff = 0;

  if (strlen(lhs) != strlen(rhs)) {
    return -1;
  }

  for (int i = 0; i < (int)strlen(lhs); i++) {
    if (lhs[i] != rhs[i]) {
      diff++;
    }
  }

  return diff;
}
