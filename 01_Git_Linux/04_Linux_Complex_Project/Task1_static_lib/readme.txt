########################################## 

gcc -Wall -Werror -Wextra -c diff.c div.c fact.c header.h mul.c sqrt.c sum.c

########################################## 

ar -rc libcalc.a *.o

ranlib libcalc.a

ar -t libcalc.a

	diff.o
	div.o
	fact.o
	mul.o
	sqrt.o
	sum.o

########################################## 

gcc main.c -L . -l calc -o main

########################################## 

ldd main
        linux-vdso.so.1 (0x00007ffc5b5d7000)
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f918d651000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f918d887000)

########################################## 

