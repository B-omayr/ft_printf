# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 15:48:57 by iomayr            #+#    #+#              #
#    Updated: 2022/03/29 16:54:45 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

LIBRARY = libftprintf.h

CC = cc

SRC =	ft_find.c ft_hexadicimal.c ft_Hexaadicimal.c ft_putaddr.c ft_putchar.c \
		ft_printf.c ft_putnbr.c ft_putstr.c ft_putnbr_u.c \

OBJ	=	$(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBRARY)

	$(CC) $(CFLAGS) -c $(SRC) 
	ar rc $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean re fclean all 