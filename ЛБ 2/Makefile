
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
AR = ar

all: calculator_app

calculator.o: calculator.c calculator.h
	$(CC) $(CFLAGS) -c calculator.c -o calculator.o

libcalculator.a: calculator.o
	$(AR) rcs libcalculator.a calculator.o

main.o: main.c calculator.h
	$(CC) $(CFLAGS) -c main.c -o main.o

calculator_app: main.o libcalculator.a
	$(CC) $(CFLAGS) main.o -L. -lcalculator -o calculator_app

clean:
	rm -f *.o *.a calculator_app

.PHONY: all clean
