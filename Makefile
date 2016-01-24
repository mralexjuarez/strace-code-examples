CC	= gcc
CFLAGS	= -C
OPTFLAG	=
LINKER	= gcc

SRC = \
	open-file.c \
	hello-world.c \

all: hello-world open-file

hello-world:
	$(CC) hello-world.c -o hello-world

open-file:
	$(CC) open-file.c -o open-file

clean:
	rm open-file hello-world
