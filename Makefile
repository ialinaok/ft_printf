# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 11:59:59 by apielasz          #+#    #+#              #
#    Updated: 2022/03/10 15:52:05 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# to compile library:

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c\
	ft_printf.c\
	ft_putchar_std_out.c\
	ft_putstr_std_out.c\
	ft_putdec_std_out.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

add:
	git add *.c Makefile libftprintf.h run.sh
	git status

.PHONY: all clean fclean re
