
CC=gcc
CFLAGS=--std=c11 -Wall -Wextra -Wpedantic

OBJS=linked_list.o stack.o

main: main.c $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf main *.o
