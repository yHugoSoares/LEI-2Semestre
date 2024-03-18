CC=gcc
CFLAGS=-Wall -Wextra -Werror -lm -pedantic


%: ./src/%.c
	$(CC) -o ./bin/$@ $^ $(CFLAGS)