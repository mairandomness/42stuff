# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/22 11:20:26 by mlacerda          #+#    #+#              #
#    Updated: 2017/08/22 14:34:07 by mlacerda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(TARGET)
$(TARGET):	
	gcc -c -Wall -Wextra -Werror -I ./includes/ ./src/ft_putchar.c ./src/ft_putstr.c ./src/ft_strcmp.c ./src/ft_strlen.c ./src/ft_swap.c
	ar rc libft.a $(OBJ)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(TARGET)

re: fclean all 