#! /bin/bash

clear
gcc -Wall -Wextra -Werror -o rush-01 *.c
norminette -R CheckForbiddenSourceHeader
echo "--- Tests start ---"

test="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
echo input: '>'"$test"'<' OK
./rush-01 "$test" | cat -e

test=""
echo input: '>'"$test"'<' empty parameter
./rush-01 "$test" | cat -e

test=" 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
echo input: '>'"$test"'<' leading space
./rush-01 "$test" | cat -e

test="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 "
echo input: '>'"$test"'<' following space
./rush-01 "$test" | cat -e

test="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2-2"
echo input: '>'"$test"'<' minus instead of last space
./rush-01 "$test" | cat -e

test="4 3 5 1 1 2 2 2 4 3 2 1 1 2 2 2"
echo input: '>'"$test"'<' third digit 5 to big
./rush-01 "$test" | cat -e

test="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2"
echo input: '>'"$test"'<' one digit missing
./rush-01 "$test" | cat -e
