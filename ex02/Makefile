# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misimon <misimon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 15:19:15 by misimon           #+#    #+#              #
#    Updated: 2023/05/09 11:20:30 by misimon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main			\
		ClapTrap		\
		ScavTrap		\
		FragTrap		\

ALL_SRC += $(addsuffix .cpp, $(SRC))

OBJS = $(ALL_SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all