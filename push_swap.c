/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/12 11:53:36 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void		push_swap(t_list **head)
{
	t_list	*head2;

	head2 = NULL;
	if (ft_sort_check(*head) == 0)
	{
		if (ft_stack_len(*head) <= 3)
			ft_s_below_three(head);
		else if (ft_stack_len(*head) <= 6)
			ft_s_below_six(head, &head2);
		//else if (ft_stack_len(*head))
	}
}

int		main(int argc, char **argv)
{
	t_list	*head;

	head = NULL;
	if (argc == 2)
		return (1);
	head = ft_create_a(head, argv, argc);
	if (head == NULL)
		return (0);
	push_swap(&head);


	//prints stack a
	t_list *t = head;
	while (t != NULL)
	{
		printf("%d\n", t->content);
		t = t->next;
	}
	return (0);
}
