/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:46:08 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/10 16:50:03 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_min_three(t_list *head, t_list *head2)
{
	t_list	*h;
	int		min;
	int		min2;
	int		min3;

	h = head;
	min = ft_find_min(head, head2);
	min2 = ft_min_two(head, head2);
	min3 = ft_find_max(head);
	while (h != NULL)
	{
		if ((h->content != min && h->content != min2) && h->content < min3)
			min3 = h->content;
		h = h->next;
	}
	return (min3);
}
