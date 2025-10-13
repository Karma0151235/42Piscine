# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/28 16:25:59 by stee              #+#    #+#              #
#    Updated: 2025/08/28 17:44:42 by stee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
       srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

%.o : %.c
	${CC} ${CFLAGS} -I includes -c $< -o $@

all:	${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
