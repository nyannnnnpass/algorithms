#include "merge_sort.h"

void merge(int array[], int left, int middle, int right)
{
  int i = 0;
  int help[right - left + 1];
  int p_left = left;
  int p_right = middle + 1;

  while (p_left <= middle && p_right <= right) {
    if (array[p_left] < array[p_right]) {
      help[i] = array[p_left];
      ++p_left;
    } else {
      help[i] = array[p_right];
      ++p_right;
    }
    ++i;
  }

  while (p_left <= middle) {
    help[i++] = array[p_left++];
  }

  while (p_right <= right) {
    help[i++] = array[p_right++];
  }

  for (i = 0; i < right - left + 1; ++i) {
    array[left + i] = help[i];
  }
}

void merge_sort(int array[], int left, int right)
{
  if (left < right) {
    int middle = left + (right - left) / 2;

    merge_sort(array, left, middle);
    merge_sort(array, middle + 1, right);
    merge(array, left, middle, right);
  }
}
