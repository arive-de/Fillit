# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/15 10:27:58 by ybenoit           #+#    #+#              #
#    Updated: 2016/11/23 17:01:44 by ybenoit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fillit 

SRC= ./srcs/ft_*.c ./srcs/main.c
OBJ= ft_*.o main.o

CC= gcc
CFLAGS= -Wall -Wextra -Werror

LIBFT= ./libft/libft.a
LIBINC= -I libft/

INCDIR= -I includes/

$(NAME):
	make -C ./libft/
	$(CC) -c $(CFLAGS) $(SRC) $(LIBINC) $(INCDIR)
	$(CC) -o $(NAME) $(OBJ) $(LIBFT)

all: $(NAME)

clean:
	/bin/rm -rf *.o
	/bin/rm -rf ./libft/*.o

fclean: clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf ./libft/libft.a
re: fclean all
