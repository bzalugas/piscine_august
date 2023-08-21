#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 14:37:37 by bazaluga          #+#    #+#              #
#    Updated: 2023/08/20 23:40:18 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	rush-02

SRC		=	dict_parsing.c ft_join2.c ft_specialcpy.c ft_split.c ft_strndup.c \
			ft_utils.c handle_list.c main.c

OBJ		=	$(SRC:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

all:		$(NAME)

%.o:		%.c
			$(CC) -c -o $@ $< $(CFLAGS)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(CFLAGS) $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		clean fclean all re
