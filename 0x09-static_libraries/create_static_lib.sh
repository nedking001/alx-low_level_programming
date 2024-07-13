#!/bin/bash

# Name of the static library
LIB_NAME="libmy.a"

# Remove any existing static library with the same name
rm -f $LIB_NAME

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create the static library from the object files
ar rcs $LIB_NAME *.o

# Clean up the object files
rm -f *.o

echo "Static library $LIB_NAME created successfully."

