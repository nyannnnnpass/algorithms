CC = 
TARGET = 
INCLUDE = -I./ -I../utils
CFLAGS = -Wall
DBGFLAGS = -g

.PHONY: clean

$(TARGET): ../utils/utils.c 
	$(CC) $^ -o $@ $(INCLUDE) $(CFLAGS) $(DBGFLAGS)

clean:
	rm -f $(TARGET)
