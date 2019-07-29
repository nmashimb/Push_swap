/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/29 17:09:54 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void		push_swap(t_list **head)
{
	if (ft_sort_check(*head) == 0)
	{
		if (ft_stack_len(*head) <= 3)
		{
			ft_s_below_three(head);
		}
		//if (ft_stack_len(*head) <= n)
	}
}

int		main(int argc, char **argv)
{
	t_list	*head;

	head = NULL;
	if (argc == 2)
		return (1);
	head = ft_create_a(head, argv, argc);
	if (head != NULL)
		push_swap(&head);



	t_list *t = head;
	while (t != NULL)
	{
		printf("%d\n", t->content);
		t = t->next;
	}
	return (0);
}
