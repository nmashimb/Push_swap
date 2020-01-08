/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_above_halfof_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:33:48 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/20 17:56:09 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_above_halfof_b(t_list **head, t_list **head2, int count)
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