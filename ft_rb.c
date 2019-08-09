/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:17:41 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 12:18:53 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rb(t_list **hd)
{
	t_list	*head;
	t_list	*p1;
	t_list	*p2;

	head = *hd;
	if (head == NULL || head -> next == NULL)
	{
		ft_putstr("Error\n");
		return ;
	}
	else if (head -> next -> next == NULL)
	{
		p1 = head -> next;
		p1 -> next = head;
		head -> next = NULL;
		head = p1;
	}
	else
	{
		p2 = *hd;
		p1 = *hd;
		while (p2 -> next -> next != NULL)
			p2 = p2 -> next;
		head = p1 -> next;
		p1 -> next = NULL;
		p2 -> next -> next = p1;
	}
	*hd = head;
	p1 = NULL;
	p2 = NULL;
	head = NULL;
	ft_putstr("rb\n");
}
