#!/bin/bash
echo "enter the three numbers"
read a b c
if [ $a -gt $b -a $a -gt $c ]
echo "A is grater number $a:"

elif [ $b -gt $c ]
echo "B is greater number $b"

elif [ $c -gt $b -a $c -gt $a ]
echo 'C is greater number $c'




