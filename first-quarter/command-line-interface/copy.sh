#!/bin/bash

# This program will ask for the location of your file,
# its new location and then copy accordingly.

read -p "Enter the directory of the file you want to copy: " location
read -p "Enter the directory you want to copy the file to: " newlocation
read -p "Enter the filename: " name

# The cp command is used to copy files.
# Specifying a new name will copy the file to the
# specified location while renaming it.

cp $location/$name $newlocation/$name

echo "File copied successfully!"
echo "To see the new file, type: ls $newlocation"
echo "To see the old file, type: ls $location"
