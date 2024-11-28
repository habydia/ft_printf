# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hadia <hadia@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 13:37:05 by hadia             #+#    #+#              #
#    Updated: 2024/11/27 16:30:41 by hadia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wextra -Wall -IIncludes

SRC = srcs/

HEADER = Includes/

OBJ = (SRC:c=.o )

NAME = libftprintf.a

all : ($NAME)

$(NAME) :$(OBJ)
	ar -rcs $@ $^
%.o:%.c $(HEADER)
	$(CC) $(CFLAGS) -C $< -O $@ -I .

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


