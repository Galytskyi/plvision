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