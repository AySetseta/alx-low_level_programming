#!/bin/bash

# Create a variable to store the object files
obj_files=""

# Loop through all the .c files in the current directory
for file in *.c; do
    # Compile the .c file into an object file
    gcc -c "$file" -o "${file%.c}.o"
    # Add the object file to the list of object files
    obj_files+="${file%.c}.o "
done

# Create the static library from the object files
ar rcs liball.a $obj_files
