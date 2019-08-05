/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:26:16 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 12:55:23 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line/libft/libft.h"

typedef struct		s_list
{
	struct s_list	*next;
	int				content;	
}					t_list;

//movesss
void				ft_sa(t_list **hd);
void				ft_ra(t_list **hd); //func has 31 lines
void				ft_rra(t_list **hd);
void				ft_pa(t_list **hd1, t_list **hd2);

//list func
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

#endif 
