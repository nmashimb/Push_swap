/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_two.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:42:29 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/12 15:16:27 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_min_two(t_list *head, t_list *head2)
{
	int		min2;
	int		min;
	t_list	*h;

	h = head;
	min = ft_find_min(head, head2);
	min2 = ft_find_max(head);
	while (h != NULL)
	{
		if (h->content != min && h->content < min2 && h->content)
			min2 = h->content;
		h = h->next;
	}
	return (min2);
}
