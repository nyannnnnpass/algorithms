#ifndef _UTILS_H
#define _UTILS_H

/**
 * Create a array with length `n`, filled with random numbers.
 */
int create_array(int **array, int n, int range);

void free_array(int array[]);

void print_array(int array[], int left, int right);

void swap(int *x, int *y);

/**
 * Return 0 if array is sorted, or return 1 if not.
 */
int is_sorted(int array[], int length);

#endif /* _UTILS_H */
