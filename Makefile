# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 10:05:02 by nmashimb          #+#    #+#              #
#    Updated: 2019/09/20 17:15:40 by nmashimb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap.a
SRC= ft_sa.c ft_ra.c ft_rra.c ft_pa.c ft_push.c ft_peek.c ft_pop.c ft_stack_len.c\
	 ft_sort_check.c ft_s_below_three.c ft_create_a.c ft_is_argv_valid.c\
	 ft_duplicates.c ft_isnumber.c ft_ss.c ft_rr.c ft_rrr.c ft_sorting_game.c\
	 ft_add_move.c ft_is_moves_valid.c ft_find_max.c ft_peek_last_cont.c\
	 ft_count_to_position.c ft_make_max_third.c ft_rra_times.c\
	 ft_is_sorted_before_max.c ft_sort_all.c ft_find_min.c ft_min_two.c\
	 ft_min_three.c ft_while_mins.c ft_move_back_to_a.c ft_median.c ft_sorted_array.c\
	 ft_get_position.c ft_getnumof_moves.c ft_above_halfof_b.c \
	 ft_below_halfof_b.c ft_push_max_to_a.c ft_push_min_to_b.c ft_update_chunk_index.c \
	 ft_sort_hundred.c ft_fill_stack.c ft_sort_five.c ft_sort_array_argv.c \
	 ft_fill_stack_and_update_argc.c ft_free_double_pointer.c

FLAGS= -Wall -Wextra -Werror 
EXEC1 = push_swap
EXEC2 = checker
LIBS = .\push_swap.a .\get_next_line\get_next_line.a .\get_next_line\libft\libft.a

OBJ= ft_sa.o ft_ra.o ft_rra.o ft_pa.o ft_push.o ft_peek.o ft_pop.o ft_stack_len.o\
	 ft_sort_check.o ft_s_below_three.o ft_create_a.o ft_is_argv_valid.o\
	 ft_duplicates.o ft_isnumber.o ft_ss.o ft_rr.o ft_rrr.o ft_sorting_game.o\
	 ft_add_move.o ft_is_moves_valid.o ft_find_max.o ft_peek_last_cont.o\
	 ft_count_to_position.o ft_make_max_third.o ft_rra_times.o\
	 ft_is_sorted_before_max.o ft_sort_all.o ft_find_min.o ft_min_two.o\
	 ft_min_three.o ft_while_mins.o ft_move_back_to_a.o ft_median.o ft_sorted_array.o\
	 ft_get_position.o ft_getnumof_moves.o ft_above_halfof_b.o \
	 ft_below_halfof_b.o ft_push_max_to_a.o ft_push_min_to_b.o ft_update_chunk_index.o \
	 ft_sort_hundred.o ft_fill_stack.o ft_sort_five.o ft_sort_array_argv.o \
	 ft_fill_stack_and_update_argc.o ft_free_double_pointer.o

all: $(NAME)
$(NAME):
		gcc $(FLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
		make clean;
		cd get_next_line; make; make clean;
		cd get_next_line/libft; make; make clean;
		gcc $(FLAGS) .\push_swap.c -o $(EXEC1) $(LIBS)
		gcc $(FLAGS) .\checker.c -o $(EXEC2) $(LIBS)
clean:
		rm -f $(OBJ)
fclean: clean
		rm -r $(NAME)
		cd get_next_line; make fclean;
		cd get_next_line/libft; make fclean;
	 
re:		fclean all
