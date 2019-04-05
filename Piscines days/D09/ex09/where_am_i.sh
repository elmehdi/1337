#!/bin/bash

var=$(ifconfig | grep "inet " | cut -d' ' -f2)
if test -z "$var"
then
	echo "I am lost!\n"
else
	echo $var | tr ' ' '\n'
fi
