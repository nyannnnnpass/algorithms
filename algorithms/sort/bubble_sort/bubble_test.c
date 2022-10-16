#include <stdio.h>

#include "utils.h"
#include "bubble_sort.h"

int main()
{
  int i, size;
  int *array = NULL;

  size = create_array(&array, 10, 100); 
  print_array(array, 0, 10);
  bubble_sort(array, 10);
  print_array(array, 0, 10);

  return 0;
}
