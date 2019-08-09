/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:21:41 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 12:22:21 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rrb(t_list **hd)
{
	t_list	*head;
	t_list	*p;

	head = *hd;
	p = *hd;
	if (head == NULL || head->next == NULL)
	{
		ft_putstr("Error\n");
		return ;
	}
	else
	{
		while (p->next -> next != NULL)
			p = p->next;
		p->next->next = head;
		head = p->next;
		p->next = NULL;
	}
	*hd = head;
	p = NULL;
	ft_putstr("rrb\n");
}
