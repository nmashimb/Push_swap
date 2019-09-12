/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_while_mins.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:56:42 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/12 15:25:39 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_place_minimum(t_list **head, t_list **head2)
{
	t_list	*h;
	t_list	*h2;

	h = *head;
	h2 = *head2;
	if (h2->next != NULL)
	{
		if (h2->content == ft_find_min(h, h2))
		{
			ft_ra(&h2);
			ft_putstr("rb\n");
		}
		else if (h2->content < h2->next->content)
		{
			ft_sa(&h2);
			ft_putstr("sb\n");
		}
	}
	*head = h;
	*head2 = h2;
}

void			ft_while_mins(t_list **head, t_list **head2, int min)
{
	t_list	*h;
	t_list	*h2;

	h = *head;
	h2 = *head2;
	while (ft_sort_check(h) == 0 && h->content != ft_find_max(h)\
			&& (h->content == min || h->content == ft_min_two(h, h2)))
	{
		ft_pa(&h2, &h);
		ft_putstr("pb\n");
		ft_place_minimum(&h, &h2);
	}
	*head = h;
	*head2 = h2;
}
