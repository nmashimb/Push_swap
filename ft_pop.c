/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:26:03 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/12 14:58:02 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list		*ft_pop(t_list **head)
{
	t_list	*p;

	if (*head == NULL)
	{
		ft_putstr("nothing in list!!\n");
		return (NULL);
	}
	else
	{
		p = *head;
		*head = p->next;
		p->next = NULL;
	}
	return (p);
}
