/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:23:35 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/24 12:00:24 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **head, int nbr)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	p->content = nbr;
	if (*head == NULL)
	{
		p->next = NULL;
		*head = p;
	}
	else
	{
		p->next = *head;
		*head = p;
	}
	p = NULL;
}
