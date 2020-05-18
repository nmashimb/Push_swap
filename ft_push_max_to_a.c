/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_max_to_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:50:22 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 11:27:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_above_half(t_list **head, t_list **head2, int count)
{
	int		i;

	i = 0;
    count = ft_stack_len(*head2) - count;
	while (i < count + 1){
		ft_rra(head2);
		ft_putstr("rrb\n");
		i++;
	}
    ft_pa(head, head2);
    ft_putstr("pa\n");
}

static void		ft_below_half(t_list **head, t_list **head2, int count)
{
	int		i;

	i = 0;
	while (i < count - 1){
		ft_ra(head2);
		ft_putstr("rb\n");
		i++;
	}
    ft_pa(head, head2);
    ft_putstr("pa\n");
}

void            ft_push_max_to_a(t_list **head, t_list **head2)
{
    int pos;
    int i;
    
    i = 0;
    while (*head2 != NULL){
        pos = ft_get_position(*head2, ft_find_max(*head2));
        if (pos <= ft_stack_len(*head2)/2 || ft_stack_len(*head2)/2 == 0)
            ft_below_half(head, head2, pos);
        else
            ft_above_half(head, head2, pos);
        i++;
    }
}