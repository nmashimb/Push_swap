/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:13:47 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/03 12:45:02 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_ra_two_nu(t_list **hd)
{
	t_list	*head;
	t_list	*p1;

	head = *hd;
	p1 = head->next;
	p1->next = head;
	head->next = NULL;
	head = p1;
	*hd = head;
}

void			ft_ra(t_list **hd)
{
	t_list	*head;
	t_list	*p1;
	t_list	*p2;

	head = *hd;
	if (head == NULL || head->next == NULL)
	{
		ft_putstr("Error\n");
		return ;
	}
	else if (head->next->next == NULL)
		ft_ra_two_nu(hd);
	else
	{
		p2 = *hd;
		p1 = *hd;
		while (p2->next->next != NULL)
			p2 = p2->next;
		head = p1->next;
		p1->next = NULL;
		p2->next->next = p1;
		*hd = head;
	}
}
