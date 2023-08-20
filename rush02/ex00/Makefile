#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 14:37:37 by bazaluga          #+#    #+#              #
#    Updated: 2023/08/19 14:37:41 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	rush-02

SRC		=	rush.c

OBJ		=	$(SRC:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

%.o:		%.c
			$(CC) -c -o $@ $< $(CFLAGS)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(CFLAGS) $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

.PHONY:		clean fclean
