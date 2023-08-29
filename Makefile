CC=gcc
CFLAGS=-I.

bitpuzzle: puzzles.o answers.o tests.o
	$(CC) -o bitpuzzle answers.o tests.o

clean:
	rm *.o bitpuzzle
