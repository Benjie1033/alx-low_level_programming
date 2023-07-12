#!/bin/bash

gcc -Werror -pedantic -Wall -Wextra -c *.c
ar -rc liball.a *
ranlib liball.a
