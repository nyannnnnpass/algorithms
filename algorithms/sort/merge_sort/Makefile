CC = gcc
TARGET = merge_sort_test
INCLUDE = -I./ -I../utils
CFLAGS = -Wall
DBGFLAGS = -g

$(TARGET): merge_sort.c merge_sort_test.c ../utils/utils.c 
	$(CC) $^ -o $@ $(INCLUDE) $(CFLAGS) $(DBGFLAGS)
