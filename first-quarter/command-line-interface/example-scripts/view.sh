#!/bin/bash

# This program will ask for the location of your file,
# its filename and then view accordingly.

read -p "Enter the directory of the file you want to view: " location
read -p "Enter the filename: " name

# The cat command is used to view files.

cat $location/$name
