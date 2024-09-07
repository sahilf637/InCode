# -*- MakeFile -*-

CC=gcc
CFLAGS=-Wall -Wextra -g -I. -I./src
PCFLAGS=`pkg-config --cflags gtk+-3.0`
PCLIBS=`pkg-config --libs gtk+-3.0`

BINARY=bin/editor
OBJECT=main.o gui.o editor.o
CFILES=src/main.c src/editor.c src/gui.c

all: $(BINARY)

$(BINARY): $(OBJECT)
	$(CC) -o $@ $^ $(PCLIBS)

$(OBJECT): $(CFILES)
	$(CC) $(CFLAGS) $(PCFLAGS) -c $^ $@

clean:
	rm -f *.o $(BINARY)

