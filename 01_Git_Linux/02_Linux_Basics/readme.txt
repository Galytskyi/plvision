##########################################
#
# https://github.com/Galytskyi/plvision/tree/master/01_Git_Linux
#
########################################## 

classic@Steel:~/plvision$ mkdir lnx_hw_1 && cd lnx_hw_1
classic@Steel:~/plvision/lnx_hw_1$ mkdir dir1 dir2
classic@Steel:~/plvision/lnx_hw_1$ touch src.txt
classic@Steel:~/plvision/lnx_hw_1$ cd dir1
classic@Steel:~/plvision/lnx_hw_1/dir1$ touch src1.txt
classic@Steel:~/plvision/lnx_hw_1/dir1$ touch src2.txt
classic@Steel:~/plvision/lnx_hw_1/dir1$ cd ../dir2
classic@Steel:~/plvision/lnx_hw_1/dir2$ touch src3.txt
classic@Steel:~/plvision/lnx_hw_1/dir2$ touch src4.txt
classic@Steel:~/plvision/lnx_hw_1/dir2$ cd ..
classic@Steel:~/plvision/lnx_hw_1$ tree
.
├── dir1
│   ├── src1.txt
│   └── src2.txt
├── dir2
│   ├── src3.txt
│   └── src4.txt
└── src.txt

2 directories, 5 files

########################################## 

classic@Steel:~/plvision/lnx_hw_1$ cd dir1
classic@Steel:~/plvision/lnx_hw_1/dir1$ ln -s src1.txt src1_ln.txt
classic@Steel:~/plvision/lnx_hw_1/dir1$ ln -s src2.txt src2_ln.txt
classic@Steel:~/plvision/lnx_hw_1/dir1$ cd ../dir2
classic@Steel:~/plvision/lnx_hw_1/dir2$ ln -s src3.txt src3_ln.txt
classic@Steel:~/plvision/lnx_hw_1/dir2$ ln -s src4.txt src4_ln.txt
classic@Steel:~/plvision/lnx_hw_1/dir2$ cd ..
classic@Steel:~/plvision/lnx_hw_1$ ln -s src.txt src_ln.txt
classic@Steel:~/plvision/lnx_hw_1$ tree
.
├── dir1
│   ├── src1.txt
│   ├── src1_ln.txt -> src1.txt
│   ├── src2.txt
│   └── src2_ln.txt -> src2.txt
├── dir2
│   ├── src3.txt
│   ├── src3_ln.txt -> src3.txt
│   ├── src4.txt
│   └── src4_ln.txt -> src4.txt
├── src.txt
└── src_ln.txt -> src.txt

2 directories, 10 files

########################################## 

classic@Steel:~/plvision/lnx_hw_1$ find -type f -name "????.txt" | xargs rm
classic@Steel:~/plvision/lnx_hw_1$ rm src.txt
classic@Steel:~/plvision/lnx_hw_1$ tree
.
├── dir1
│   ├── src1_ln.txt -> src1.txt
│   └── src2_ln.txt -> src2.txt
├── dir2
│   ├── src3_ln.txt -> src3.txt
│   └── src4_ln.txt -> src4.txt
└── src_ln.txt -> src.txt

2 directories, 5 files

classic@Steel:~/plvision/lnx_hw_1$ find -xtype l | xargs rm -f

########################################## 

