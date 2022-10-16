#include "utils.h"
#include "quick_sort.h"

int partition(int array[], int low, int high)
{
  int i = low;
  int j = high + 1;
  int pivot = array[i];

  while (1) {
    while (i + 1 <= high && array[++i] <= pivot);
    while (j - 1 >= low && array[--j] >= pivot);
    if (i >= j) break;
    swap(&array[i], &array[j]);
  }
  swap(&array[j], &array[low]);

  return j;
}

void quick_sort(int array[], int low, int high)
{
  int pivot = 0;

  if (low < high) {
    pivot = partition(array, low, high);
    quick_sort(array, low, pivot - 1);
    quick_sort(array, pivot + 1, high);
  }
}
