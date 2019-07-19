/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/19 15:12:39 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdio.h>

static void	ft_push(t_list **head, int nbr)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	p -> content = nbr;
	if (*head == NULL)
	{
		p -> next = NULL;
		*head = p;
	}
	else
	{
		p -> next = *head;
		*head = p;
	}
	free(p);
	p = NULL;
}



int		main()
{
	t_list	*head = NULL;
	t_list	*t;

	ft_push(&head, 2);

	t = head;
	while (t != NULL)
	{
	printf("%d\n", head -> content);
	t = t-> next;
	}

	return (0);
}
