#! /bin/bash

gcc -Wall -Wextra -Werror -o rush-01 *.c
norminette -R CheckForbiddenSourceHeader
echo "--- Tests start ---"

test="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
echo input: '>'"$test"'<'
./rush-01 "$test" | cat -e

test=""
echo input: '>'"$test"'<'
./rush-01 "$test" | cat -e

test=" 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
echo input: '>'"$test"'<'
./rush-01 "$test" | cat -e

test="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2-2"
echo input: '>'"$test"'<'
./rush-01 "$test" | cat -e

test="4 3 5 1 1 2 2 2 4 3 2 1 1 2 2 2"
echo input: '>'"$test"'<'
./rush-01 "$test" | cat -e
