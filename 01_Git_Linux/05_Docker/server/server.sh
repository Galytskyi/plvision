#!/bin/bash

#nc -lvp 5555 > 1.txt

echo "Run client docker and wait for messages from client:"

nc -lp 5555 
