/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_times.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 11:11:10 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/02 11:12:09 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra_times(t_list **head, int times)
{
	int		i;
	t_list	*t;

	i = 0;
	while (i < times)
	{
		ft_rra(head);
		ft_putstr("rra\n");
		i++;
	}
	t = *head;
	if (t->content > t->next->content)
	{
		ft_sa(head);
		ft_putstr("sa\n");
	}
}
