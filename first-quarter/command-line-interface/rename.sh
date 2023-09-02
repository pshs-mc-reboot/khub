#!/bin/bash

# This program will ask for the location of your file,
# its new and old filename, and then rename accordingly.

read -p "Enter the directory of the file you want to rename: " location
read -p "Enter the old filename: " oldname
read -p "Enter the new filename: " newname

# The mv command is used to move or rename files.
# Not including a new name will move the file to the
# specified location while keeping the same name.

mv $location/$oldname $location/$newname

echo "File renamed successfully!"
echo "To see the new file, type: ls $location"
