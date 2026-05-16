# This command will clear all executable files and empty directories in recursive
# You can only use this script for only linux systems or bash supported systems

# !/bin/bash
# Find all compiled ELF binaries and delete them
find . -type f -exec file {} \; | grep "ELF" | cut -d: -f1 | xargs rm -f
# Find and delete all empty directories
find . -type d -empty -delete