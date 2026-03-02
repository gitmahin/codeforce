# !/bin/bash

find . -type f -exec file {} \; | grep "ELF" | cut -d: -f1 | xargs rm -f
find . -type d -empty -delete