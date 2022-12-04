#!/usr/bin/env sh
echo "buildando o arquivo: $1"
gcc $1.c -o $1.out
echo "Em execução: $1"
./$1.out