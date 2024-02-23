#Makfile for recompilation

#compiler flags
CC = g++
CFLAGS = -Wall

OBJS = main.o complex_num_cal.o

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main

main.o: main.cpp complex.h
	$(CC) $(CFLAGS) -c main.cpp

complex_num_cal.o: complex_num_cal.cpp complex.h
	$(CC) $(CFLAGS) -c complex_num_cal.cpp
#clean
clean:
	rm -rf $(OBJS) main


