#!/bin/bash
make
gcc -o run -v -Wall -Wextra -Werror main.c -L/Users/apielasz/Documents/projects_git/ft_printf -lftprintf
make fclean
./run
rm run