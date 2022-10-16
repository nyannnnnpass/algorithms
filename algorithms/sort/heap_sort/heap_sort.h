#ifndef _HEAP_SORT_H
#define _HEAP_SORT_H

void heapify(int array[], int length, int root)
{
  int temp;
  int max = root;
  int left = root * 2 + 1;
  int right = root * 2 + 2;

  // max = MAX{array[root], array[left], array[right]}
  if (left < length && array[max] < array[left]) {
    max = left;
  }

  if (right < length && array[max] < array[right]) {
    max = right;
  }

  if (root != max) {
    // swap array[root] and array[max]
    temp = array[root];
    array[root] = array[max];
    array[max] = temp;

    heapify(array, length, max);
  }
}

void heap_sort(int array[], int length)
{
  int i, temp;

  // Build max heap
  for (i = length / 2 - 1; i >= 0; --i) {
    heapify(array, length, i);
  } 

  // Heap sort
  for (i = n - 1; i >= 0; --i) {
    temp = array[0];
    array[0] = array[i];
    array[i] = temp;

    heapify(array, i, 0); 
  }
}

#endif /* _HEAP_SORT_H */
