#include <stdio.h>

#include "utils.h"
#include "merge_sort.h"

int main()
{
  int size;
  int *array = NULL;

  size = create_array(&array, 10, 50);
  print_array(array, 0, 10);
  merge_sort(array, 0, 10);
  print_array(array, 0, 10);

  return 0;
}
