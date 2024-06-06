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

