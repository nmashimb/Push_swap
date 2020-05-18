/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:25:17 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/02 10:31:28 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_find_max(t_list *head)
{
	int		max;
	t_list	*t;

	t = head;
	max = ft_peek(head);
	while (t != NULL)
	{
		if (max < t->content)
			max = t->content;
		t = t->next;
	}
	return (max);
}
