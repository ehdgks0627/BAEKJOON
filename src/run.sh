#!/bin/bash
folder="../compile"
mkdir -p $folder
target="$folder/${1/.cpp/}"
g++ -o "$target" $1
./$target
