#!/bin/bash

#this script will create random numbers 

UPPER=256
N=64

DIV=$(($UPPER+1))


for i in `seq $N`
do
	R=$(($RANDOM%DIV))
	echo $R
done > number_list
