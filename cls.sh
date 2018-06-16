#!/bin/bash

rm -fv *.exe
rm -fv deloutput.txt result.txt
if [ -f *.txt ]; then
	rm -f -i *.txt
else 
	echo "not found any *.txt"
fi
