#include <assert.h>
#include <stdio.h>

#include "utils.h"

int main()
{
  int size = 0;
  int *array = NULL;

  size = create_array(&array, 10, 100);
  assert(size != 0);
  print_array(array, 0, 10);

  swap(&array[0], &array[1]);
  print_array(array, 0, 10);

  return 0;
}
