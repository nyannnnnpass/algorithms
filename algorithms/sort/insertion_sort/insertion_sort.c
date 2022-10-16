#include "insertion_sort.h"

void insertion_sort(int array[], int length)
{
  int i;
  int j;
  int key;

  for (i = 1; i < length; ++i) {
    key = array[i];
    j = i - 1;

    while (j >= 0 && array[j] > key) {
      array[j + 1] = array[j];
      --j;

#ifdef DEBUG
      print_array(array, length);
#endif

    }

    array[j + 1] = key;
  }
}
