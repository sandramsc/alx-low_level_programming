#!/bin/bash

/* Compile each .c file inside the current directory */
gcc -c *c
if [ $? -ne 0 ]; then
	echo "Error compiling .c files"
	exit 1 
fi

/* Create a static library archive file */
ar rcs liball.a *.o
if [ $? -ne 0 ]; then
	echo "Error creating static library"
	exit 1
fi

/* Clean up object files */
rm *.o
if [ $? -ne 0 ]; then
	echo "Error cleaning up object files"
	exit 1
fi

echo "Static library created successfully"
exit 0
