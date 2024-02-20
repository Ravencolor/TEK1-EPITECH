#!/bin/bash

# Define colors
dark='\033[1;39m'
green='\033[0;32m'
red='\033[0;31m'
end='\033[0m'

# Name of the test
echo -e "$dark\nTest return value$end"

gcc -o segfault tests/my_segfault.c
gcc -o divzero tests/my_divzero.c

# Test
declare -a test=(
"cd gg; echo \$?"
"echo \$?"
"ls; echo \$?"
"p; p; echo \$?"
"ech; echo \$?"
"cd bb; cd ..; echo \$?"
"./segfault; echo \$?"
"setenv sd sd sd; setenv dde; echo \$?"
"ls | grm; echo \$?"
"ls | cat -e; echo \$?"
"ls | grep -e test; echo \$?"
"ls | grep -e 'test'; echo \$?"
"history test test test; echo \$?"
"history sf; echo \$?"
)

touch test
touch test1

for i in "${test[@]}"
do
    echo "$i" | ./42sh &> test
    echo "$i" | tcsh &> test1
    output=$(tr -d '\0' < test)
    output2=$(tr -d '\0' < test1)
    if [ "$output" == "$output2" ]; then
        echo -e "$green[ OK ]$end: command: $i"
    else
        echo -e "$red[ KO ]$end: command: $i"
    fi

done
rm test
rm test1
rm segfault
rm -f divzero
