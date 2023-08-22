EXEC = emulator

CC = gcc

CFLAGS = -g -MMD -I src/include -L src/lib -o main main.c -lmingw32 -lSDL2main -lSDL2

SRC = $(wildcard src/*.c)

OBJECTS = $(SRC:.c=.o)

DEPENDS = $(OBJECTS:.o=.d)


all:
	gcc -I src/include -L src/lib -o main main.c -lmingw32 -lSDL2main -lSDL2
