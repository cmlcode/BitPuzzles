CC=gcc
CFLAGS=-I.
DEPS = puzzles.h answers.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

bitpuzzle: answers.o tests.o puzzles.o
	$(CC) -o bitpuzzle answers.o tests.o puzzles.o

clean:
	rm *.o bitpuzzle
