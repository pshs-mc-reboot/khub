#!/bin/bash

# This program will ask for the location of your file,
# its filename and then edit accordingly using nano.

read -p "Enter the directory of the file you want to edit: " location
read -p "Enter the filename: " name

# The nano command is used to edit files.

nano $location/$name
