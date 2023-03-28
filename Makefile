TARGET = main
LIBS = -I. -pthread -lm
CC = gcc
CFLAGS = -g -Wall -pthread -O0 -lm

.PHONY: default all clean_exec

default: $(TARGET)
all: default

OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))
HEADERS = $(wildcard *.h)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -O0 -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -O0 -Wall $(LIBS) -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)

clean_exec:
	-rm -f *.o
