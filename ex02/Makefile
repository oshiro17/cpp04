# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 11:10:16 by panti             #+#    #+#              #
#    Updated: 2023/12/02 18:01:30 by noshiro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
CC			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -MMD -MP
RM			= rm -rf
FILES		= main Animal Cat Dog WrongAnimal WrongCat Brain
OBJS		= $(FILES:=.o)
DEPS		= $(FILES:=.d)

.PHONY: all clean re
all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS) $(DEPS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

-include $(DEPS)