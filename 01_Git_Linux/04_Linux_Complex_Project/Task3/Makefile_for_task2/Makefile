CC = gcc
CFLAGS=-Wall -Werror -Wextra -fpic
SRC=low.c uper.c
INC=header.h
OUT=libcalc.so


all: main

create_lib: 
	$(CC) $(CFLAGS) -c $(SRC) $(INC)

lib_to_shared: 
	$(CC) -shared -o $(OUT) *.o

main: create_lib lib_to_shared
	$(CC) main.c -L . -l calc -o main

clean:
	rm -rf *.o main $(OUT)
