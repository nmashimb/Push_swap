/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:15:38 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/24 11:58:30 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rra(t_list **hd)
{
	t_list	*head;
	t_list	*p;

	head = *hd;
	p = *hd;
	if (head == NULL || head->next == NULL)
	{
		ft_putstr("list empty or list cannot swap!!!\n");
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
}
