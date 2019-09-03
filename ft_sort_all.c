/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:20:31 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/03 12:21:39 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


void	ft_sort_all(t_list	**hd, t_list **hd2)
{
	t_list	*head;
	t_list	*head2;

	head = *hd;
	head2 = *hd2;
	if (ft_is_sorted_before_max(head) == 0)
		head = ft_make_max_third(*hd, ft_find_max(head));
	while (ft_sort_check(head) == 0)
		ft_count_to_position(&head, &head2);
	
	t_list	*x = head;
	printf("STACK A\n");
	while (x != NULL)
	{
		printf("%d\n", x->content);
		x = x->next;
	}
	t_list	*y = head2;
	printf("STACK B\n");
	while (y != NULL)
	{
		printf("%d\n", y->content);
		y = y->next;
	}
}

int		main(int argc, char **argv)
{
	t_list	*head;
	t_list	*head2;

	head = NULL;
	head2 = NULL;
	head = ft_create_a(head, argv, argc);
	ft_sort_all(&head, &head2);
	return (0);
}
