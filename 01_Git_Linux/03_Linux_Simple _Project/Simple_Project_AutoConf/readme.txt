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