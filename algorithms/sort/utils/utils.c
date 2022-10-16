#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utils.h"

/**
 * Create a array with length `n`, filled with random numbers.
 */
int create_array(int **array, int n, int range)
{
  int i, ret;

  assert(array != NULL);
  assert(n > 0);
  assert(range > 0);

  *array = (int *)malloc(n * sizeof(int));

  assert(array != NULL);

  srand(time(NULL));

  for (i = 0; i < n; ++i) {
    (*array)[i] = rand() % range;
  }
  ret = n;

  return ret;
}


void free_array(int array[])
{

}

void print_array(int array[], int left, int right)
{
  int i;
  for (i = left; i < right; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
  return;
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int is_sorted(int array[], int length)
{
  int i;

  for (i = 1; i < length; ++i) {
    if (array[i] < array[i - 1])
      return 1;
  }

  return 0;
}
