/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_max_third.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:55:12 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/10 17:24:36 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_while_function(t_list **head, t_list **head2, int min, int max)
{
	t_list	*h;
	t_list	*h2;

	h = *head;
	h2 = *head2;
	ft_while_mins(&h, &h2, min);
	if (h->content != max && h->content > h->next->content)
	{
		ft_sa(&h);
		ft_putstr("sa\n");
	}
	else if (h->content != max || h->content != min ||\
		h->content != ft_min_two(h, h2) ||\
		h->content != ft_min_three(h, h2))
	{
		ft_ra(&h);
		ft_putstr("ra\n");
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
		ft_while_function(&h, &h2, min, max);
	if (h->content > h->next->content)
	{
		ft_sa(&h);
		ft_putstr("sa\n");
	}
	*head = h;
	*head2 = h2;
}
