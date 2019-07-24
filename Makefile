# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 10:05:02 by nmashimb          #+#    #+#              #
#    Updated: 2019/07/24 11:53:07 by nmashimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap.a
SRC= ft_sa.c ft_ra.c ft_rra.c ft_pa.c ft_push.c ft_peek.c ft_pop.c ft_stack_len.c\
	 ft_sort_check.c 
FLAGS= -Wall -Wextra -Werror
OBJ= ft_sa.o ft_ra.o ft_rra.o ft_pa.o ft_push.o ft_peek.o ft_pop.o ft_stack_len.o\
	 ft_sort_check.o 

all: $(NAME)
$(NAME):
		gcc $(FLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean: 
		rm -f $(OBJ)
fclean: clean
		rm -r $(NAME)
re:		fclean all
