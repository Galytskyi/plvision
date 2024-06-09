##########################################
#
# https://github.com/Galytskyi/plvision/tree/master/01_Git_Linux
#
########################################## 
#
# gnu_ht\Make_task1
#
########################################## 

mkdir gnu_ht
cd gnu_ht/
mkdir Make_task1
mkdir Make_task2
cd Make_task1

touch main.c
touch src1.c
touch header.h

touch Makefile_1
touch Makefile_2
touch Makefile_3

########################################## 

make -f Makefile_1

make -f Makefile_2
make -f Makefile_2 clean

make -f Makefile_3
make -f Makefile_3 clean

########################################## 



########################################## 
#
# gnu_ht\Make_task2
#
########################################## 

mkdir gnu_ht
cd gnu_ht/
mkdir Make_task1
mkdir Make_task2
cd Make_task2

touch main.c
touch src1.c
touch src2.c
touch src3.c
touch header.h

########################################## 

touch Makefile

touch make1.mk
touch make2.mk
touch make3.mk
touch clean.mk

########################################## 

make
make clean

make
make -f clean.mk

########################################## 