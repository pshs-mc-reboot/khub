#!/bin/bash

# This program will ask for the location of your file
# ask for confirmation and then delete it.

read -p "Enter the directory of the file you want to delete: " location
read -p "Enter the filename: " name
read -p "Are you sure you want to delete $name? (y/n) " confirm -n 1 -r

# The rm command is used to delete files.

if [[ $confirm =~ ^[Yy]$ ]] then
    rm $location/$name

    echo "File deleted successfully!"
    echo "To see the directory where the file was removed, type: ls $location"
else
    echo "File not deleted."
fi
