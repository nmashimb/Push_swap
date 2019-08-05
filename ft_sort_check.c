/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:50:05 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 11:33:02 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_check(t_list *head)
{
	int		min;
	t_list	*travers;

	if (head == NULL)
	{
		ft_putstr("list empty!!!\n");
		return (0);
	}
	min = ft_peek(head);
	travers = head;
	while (travers != NULL)
	{
		if (min > travers->content)
			return (0);
		travers = travers->next;
	}
	return (1);
}
