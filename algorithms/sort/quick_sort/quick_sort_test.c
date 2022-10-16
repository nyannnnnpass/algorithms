#include <assert.h>
#include <stdio.h>

#include "utils.h"
#include "quick_sort.h"

int main(int argc, char *argv[])
{
  int *array = NULL;

  assert(create_array(&array, 10, 50) != 0);
  
  print_array(array, 0, 10);
  quick_sort(array, 0, 10);
  print_array(array, 0, 10);

  assert(is_sorted(array, 10) == 0);

  return 0;
}
