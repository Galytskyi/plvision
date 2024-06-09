##########################################
#
# https://github.com/Galytskyi/plvision/tree/master/01_Git_Linux
#
##########################################
#
# Simple_Project
#
##########################################

gcc -o main main.c func.c

make

make -f Makefile

make -f MakefileDeps

make -f MakefileVars clean

make -f MakefileVars

##########################################


##########################################
#
# Simple_Project_AutoConf
#
##########################################


aclocal

autoconf

automake --add-missing

./configure

make distcheck

##########################################

tar -xf main-0.1.tar.gz

cd main-0.1/

./configure

make

##########################################

sudo make install

whereis main

cd '/usr/local/bin' && rm -f main

##########################################