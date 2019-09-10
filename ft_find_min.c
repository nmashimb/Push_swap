/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:38:59 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/10 10:42:19 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_find_min(t_list *head, t_list *head2)
{
	t_list	*h;
	t_list	*h2;
	int		min;

	h = head;
	min = ft_peek(h);
	while (h != NULL)
	{
		if (h->content < min)
			min = h->content;
		h = h->next;
	}
	h2 = head2;
	while (h2 != NULL)
	{
		if (h2->content < min)
			min = h2->content;
		h2 = h2->next;
	}
	return (min);
}
