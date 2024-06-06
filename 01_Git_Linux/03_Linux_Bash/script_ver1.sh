#!/bin/bash

##########################################

param_count=$#
param_dir=""
param_max_depth=2

##########################################

echo "Run script: " $0
echo "Param count: " $param_count 

##########################################

case $param_count in

	0) 
		param_dir=$(pwd) 	
		;;
	1) 
		param_dir=$1
		;;
	*) 
		echo "Error: wrong count of params!"
		exit 1 
		;;
esac

echo "Dir for traversing:" $param_dir 

##########################################

#file_list=$(ls $param_dir)

file_list=$(find -L $param_dir -maxdepth $param_max_depth -type f)
#echo "All files:" $file_list

echo ""

##########################################

for file_name in $file_list
do
	if [ -x $file_name ]; then

		echo "File \"$file_name\" is executable"
	
	elif [ -L $file_name ]; then

        	echo "File \"$file_name\" is soft link"
	#else

		#echo "File \"$file_name\""
        fi
done

##########################################
