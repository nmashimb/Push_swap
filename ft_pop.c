/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:26:03 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/03 12:42:12 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_pop(t_list **head)
{
	int		num;
	t_list	*p;

	p = NULL;
	if (*head == NULL)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else
	{
		p = *head;
		*head = p->next;
		p->next = NULL;
		num = p->content;
		free(p);
	}
	return (num);
}
