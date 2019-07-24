/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/24 12:09:25 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
//ss(sa and sb at the same time)
//rrr(rra and rrb at the same time)

static void		push_swap(t_list	**hd)
{
	if (ft_stack_len(*hd) <= 3)
	{
		ft_s_below_three(*hd);
	}
}


int		main()
{
	t_list	*head1 = NULL;
	t_list	*head2 = NULL;
	t_list	*t;
	t_list	*s;

	ft_push(&head1, 3);
	ft_push(&head1, 1);
	ft_push(&head1, 2);
//	ft_push(&head1, 4);
	//ft_push(&head1, 5);
	
	ft_push(&head2, 9);
	ft_push(&head2, 7);
	ft_push(&head2, 8);
	//ft_push(&head2, 6);

	ft_sa(&head1);
	//ft_ra(&head);
	//ft_rra(&head);

	//ft_pa(&head2, &head1);
	//ft_pa(&head1, &head2);
	//ft_pa(&head1, &head2);
	//ft_pa(&head1, &head2);
	//ft_pa(&head1, &head2);

	//t_list *x = ft_pop(&head);
	//t_list	*x = ft_pop(&head2);
	//int x = ft_peek(head);
	int d = ft_sort_check(head1);	
	printf("%d\n", d); //length
	printf("stack A\n");
	t = head1;
	while (t != NULL)
	{
		printf("%d\n", t -> content);
		t = t -> next;
	}
	printf("stack B\n");
	s = head2;
	while (s != NULL)
	{
		printf("%d\n", s -> content);
		s = s -> next;
	}
	return (0);
}
