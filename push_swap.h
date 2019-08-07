/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:26:16 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/07 11:47:07 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line/libft/libft.h"
# include "get_next_line/get_next_line.h"

typedef struct		s_list
{
	struct s_list	*next;
	int				content;	
}					t_list;

typedef struct		x_list
{
	struct x_list	*next;
	char			*content;
}					mvs_list;

//movesss
void				ft_sa(t_list **hd);
void				ft_ra(t_list **hd); //func has 31 lines
void				ft_rra(t_list **hd);
void				ft_pa(t_list **hd1, t_list **hd2);
void				ft_ss(t_list **hd1, t_list **hd2);
void				ft_rr(t_list **hd1, t_list **hd2);
void				ft_rrr(t_list **hd1, t_list **hd2);

//list func
void				ft_add_move(mvs_list **mhead, mvs_list **mtl, char *line);
void				ft_push(t_list	**head, int nbr);
int					ft_peek(t_list *head);
t_list				*ft_pop(t_list **head); //recheck

//others
int					ft_stack_len(t_list *head);
int					ft_sort_check(t_list *head);
int					ft_is_argv_valid(int argc, char **argcv);
int					ft_duplicates(int curr_indx, char **argv);
int					ft_isnumber(char *argv);
t_list				*ft_create_a(t_list *head, char **argv, int argc);


//sort
void				ft_s_below_three(t_list **hd);
void				ft_sorting_game(t_list **hd1, t_list **hd2, mvs_list *mhead);

#endif 
