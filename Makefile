
CC=gcc
CFLAGS=--std=c11 -Wall -Wextra -Wpedantic

SRC=$(shell find . -name \*.c)
OBJ=$(SRC:.c=.o)

main: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	@echo

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $^

clean:
	rm -rf main *.o
