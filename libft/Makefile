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

SRCS	=	ft_checkbase.c \
		ft_putchar.c \
		ft_putnbr_base.c \
		ft_putnbr_hex.c \
		ft_putnbr_uint.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_strlen.c \

OBJ	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

$(NAME):	${OBJ}
	ar rc ${NAME} ${OBJ}

all:	${NAME}

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
