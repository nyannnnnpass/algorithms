#include "bubble_sort.h"

void bubble_sort(int array[], int length)
{
  int i, j, temp;

  for (i = 0; i < length; ++i) {
    for (j = 0; j < length - i; ++j) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}
