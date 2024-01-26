#include "isogram.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_isogram(const char *phrase) {
  if (phrase == NULL) {
    return false;
  }

  if (*phrase == '\0') {
    return true;
  }

  int phrase_len = strlen(phrase);

  for (int i = 0; i < phrase_len - 1; i++) {
    if (phrase[i] == '-' || phrase[i] == ' ') {
      continue;
    }
    for (int j = i + 1; j < phrase_len; j++) {
      if (phrase[j] == '-' || phrase[j] == ' ') {
        continue;
      }

      if (tolower(phrase[i]) == tolower(phrase[j])) {
        return false;
      }
    }
  }

  return true;
}
