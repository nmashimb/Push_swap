/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:26:16 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/24 12:02:56 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct		s_list
{
	struct s_list	*next;
	int				content;	
}					t_list;

void	ft_sa(t_list **hd);
void	ft_ra(t_list **hd); //func has 31 lines
void	ft_rra(t_list **hd);
void	ft_pa(t_list **hd1, t_list **hd2);

void	ft_push(t_list	**head, int nbr);
int		ft_peek(t_list *head);
t_list	*ft_pop(t_list **head); //recheck

int		ft_stack_len(t_list *head);
int		ft_sort_check(t_list *head);

#endif 
