#!/bin/bash
folder="compile"
mkdir -p $folder
g++ -o "$folder/${1/.cpp/}" $1
