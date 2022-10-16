CC = gcc
TARGET = quick_sort_test
INCLUDE = -I./ -I../utils
CFLAGS = -Wall
DBGFLAGS = -g

.PHONY: clean

$(TARGET): ../utils/utils.c quick_sort.c quick_sort_test.c 
	$(CC) $^ -o $@ $(INCLUDE) $(CFLAGS) $(DBGFLAGS)

clean:
	rm -f $(TARGET)
