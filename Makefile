# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 10:05:02 by nmashimb          #+#    #+#              #
#    Updated: 2019/08/05 12:55:40 by nmashimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap.a
SRC= ft_sa.c ft_ra.c ft_rra.c ft_pa.c ft_push.c ft_peek.c ft_pop.c ft_stack_len.c\
	 ft_sort_check.c ft_s_below_three.c ft_create_a.c ft_is_argv_valid.c ft_duplicates.c\
	 ft_isnumber.c
FLAGS= -Wall -Wextra -Werror
OBJ= ft_sa.o ft_ra.o ft_rra.o ft_pa.o ft_push.o ft_peek.o ft_pop.o ft_stack_len.o\
	 ft_sort_check.o ft_s_below_three.o ft_create_a.o ft_is_argv_valid.o ft_duplicates.o\
	 ft_isnumber.o

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
