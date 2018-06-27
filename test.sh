#!/bin/bash
file=txt.txt
for d in $(seq -5 5); do
	echo $d > file
	./null.exe < file
	rm file
done
 
