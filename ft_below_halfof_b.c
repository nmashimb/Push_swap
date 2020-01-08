/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_below_halfof_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:33:48 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/20 17:56:09 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_below_halfof_b(t_list **head, t_list **head2, int count)
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