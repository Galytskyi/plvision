CC = gcc
CFLAGS=-Wall -Werror -Wextra
SRC=diff.c div.c fact.c mul.c sqrt.c sum.c
INC=header.h
OUT=libcalc.a

all: main

create_lib: 
	$(CC) $(CFLAGS) -c $(SRC) $(INC)

lib_to_arc: 
	ar -rc $(OUT) *.o
	ranlib $(OUT)
	ar -t $(OUT)

main: create_lib lib_to_arc
	$(CC) main.c -L . -l calc -o main

clean:
	rm -rf *.o main $(OUT)
