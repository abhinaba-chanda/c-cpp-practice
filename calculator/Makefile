CC = gcc
CFLAGS = -Wall -Wextra -std=c11

calc: main.c calc.c calc.h
	$(CC) $(CFLAGS) -o calc main.c calc.c -lm

test: test_calc.c calc.c calc.h
	$(CC) $(CFLAGS) -o test_calc test_calc.c calc.c -lm
	./test_calc

clean:
	rm -f calc test_calc calc.exe test_calc.exe
