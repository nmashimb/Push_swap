/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_max_third.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:55:12 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/19 17:03:23 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_while_function(t_list **head, t_list **head2, int max)
{
	t_list	*h;
	t_list	*h2;

	h = *head;
	h2 = *head2;
	if (h->next->next->content == max && h->content > h->next->content)
	{
		ft_sa(&h);
		ft_putstr("sa\n");
	}
	else if (ft_is_sorted_before_max(h) == 0 && (h->content != max))
	{
		ft_pa(&h2, &h);
		ft_putstr("pb\n");
		if (h2->next != NULL && h2->content < h2->next->content)
		{
			ft_sa(&h2);
			ft_putstr("sb\n");
		}
	}
	*head = h;
	*head2 = h2;
}

void		ft_make_max_third(t_list **head, t_list **head2, int max)
{
	t_list	*h;
	t_list	*h2;
	int		min;

	h = *head;
	h2 = *head2;
	min = ft_find_min(h, h2);
	if (h->content == ft_find_max(h))
		ft_rra_times(&h, 2);
	else if (h->next->content == ft_find_max(h))
		ft_rra_times(&h, 1);
	while (max != h->next->next->content && ft_is_sorted_before_max(h) == 0)
		ft_while_function(&h, &h2, max);
	if (h->content > h->next->content)
	{
		ft_sa(&h);
		ft_putstr("sa\n");
	}
	*head = h;
	*head2 = h2;
}
