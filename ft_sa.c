/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:11:17 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/24 11:57:18 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sa(t_list **hd)
{
	t_list	*head;
	t_list	*p;

	head = *hd;
	if (head == NULL || head->next == NULL)
	{
		ft_putstr("list empty or cannot be swapped!!!\n");
		return ;
	}
	p = head->next;
	head->next = p->next;
	p->next = head;
	head = p;
	*hd = head;
	p = NULL;
	head = NULL;
}
