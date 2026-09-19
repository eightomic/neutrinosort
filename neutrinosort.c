#include <stddef.h>

void neutrinosort_small(int *elements, size_t elements_length) {
  int element;
  size_t gap;
  size_t i = 1;
  size_t j;
  size_t k;

  while (i < elements_length) {
    if (elements[i - 1] < elements[i]) {
      i++;
      continue;
    }

    element = elements[i];
    j = i;

    if (elements[0] < element) {
      gap = (i >> 3) + (i >> 2);
      k = i;

      while (gap > 15) {
        if (elements[k - gap] > element) {
          k -= gap;

          while (
            k > gap &&
            elements[k - gap] > element
          ) {
            k -= gap;

            if (
              k > (gap << 2) &&
              elements[k - (gap << 2)] > element
            ) {
              k -= gap << 2;
            }
          }

          gap = k >> 1;
          continue;
        }

        gap >>= 1;
      }

      while (j > k) {
        elements[j] = elements[j - 1];
        j--;
      }

      while (elements[j - 1] > element) {
        elements[j] = elements[j - 1];
        j--;
      }

      elements[j] = element;
      i++;
      continue;
    }

    while (j > 0) {
      elements[j] = elements[j - 1];
      j--;
    }

    elements[j] = element;
    i++;
  }
}
