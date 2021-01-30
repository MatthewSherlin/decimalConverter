#Simple Makefile for 3 excersises
#make run to create executables for each function using ./[name]

run:
	gcc -o binary int2binary.c
	gcc -o hexadecimal int2hex.c
	gcc -o bitCount bitCount.c

clean:  
	rm -rf *~ run

