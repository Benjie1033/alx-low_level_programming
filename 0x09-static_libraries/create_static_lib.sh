
#!bin/bash/create_static_lib.sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc libmy.a
ranlib libmy.a
