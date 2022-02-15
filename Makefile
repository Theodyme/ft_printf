# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flplace <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/22 12:20:26 by flplace           #+#    #+#              #
#    Updated: 2021/01/22 16:09:58 by flplace          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft_printf.c \
		srcs/ft_printf_wrappers_one.c \
		srcs/ft_printf_wrappers_two.c \

OBJ	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

$(NAME):	${OBJ} libft/libft.a
	ar rc ${NAME} ${OBJ}

libft/libft.a:
	make -C libft

all:	${NAME}

clean:
	make -C libft clean
	rm -f ${OBJ}

fclean:	clean
	make -C libft fclean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
