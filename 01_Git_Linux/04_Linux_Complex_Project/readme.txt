##########################################
#
# https://github.com/Galytskyi/plvision/tree/master/01_Git_Linux
#
########################################## 
#
# Task1_static_lib
#
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



########################################## 
#
# Task2_shared_lib
#
########################################## 

gcc -Wall -Werror -Wextra -fpic -c low.c uper.c

########################################## 

gcc -shared -o libcalc.so *.o

gcc main.c -L . -l calc -o main

########################################## 

export LD_LIBRARY_PATH=`pwd`:$LD_LIBRARY_PATH
unset LD_LIBRARY_PATH

########################################## 

gcc main.c -L . -l calc -Wl,-rpath=$(pwd) -Wall -o main

########################################## 


########################################## 
#
# Task3/Makefile_for_task1
#
########################################## 

make 
make clean

########################################## 


########################################## 
#
# Task3/Makefile_for_task2
#
########################################## 

make 

########################################## 

export LD_LIBRARY_PATH=`pwd`:$LD_LIBRARY_PATH
unset LD_LIBRARY_PATH

########################################## 

make clean

########################################## 

