#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create the static library liball.a from the object files
ar rc liball.a *.o

# Index the library for quicker access
ranlib liball.a

# Clean up by removing the object files
rm -f *.o

# Print a message indicating the library has been created
echo "Static library liball.a has been created."

