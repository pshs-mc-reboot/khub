#!/bin/bash

# This program will ask for the location of your file,
# its new location, filename, and then move accordingly.

read -p "Enter the directory of the file you want to move: " location
read -p "Enter the directory you want to move the file to: " newlocation
read -p "Enter the filename: " name

# The mv command is used to move or rename files.
# Specifying a new name will move the file to the
# specified location while renaming it.

mv $location/$name $newlocation/$name

echo "File renamed successfully!"
echo "To see the new file, type: ls $newlocation"
