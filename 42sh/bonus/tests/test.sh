#!/bin/bash

make -s
make clean -s
clear

./tests/test_simple.sh
./tests/test_cd.sh
./tests/test_env.sh
./tests/test_pipes.sh
./tests/test_echo.sh
./tests/test_redirection.sh
./tests/test_alias.sh
./tests/test_returnvalue.sh
./tests/test_complexe.sh
