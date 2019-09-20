/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:20:31 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/20 17:59:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int		ft_where_is_max(t_list *head)
{
	int		count;

	count = 0;
	while (head->content != ft_find_max(head))
		{
			count++;
			head = head->next;
		}
	return (count);
}

/*int		ft_median(t_list *head, int min)
{
	int		median;

	median = (min + ft_find_max(head)) / 2;
	return (median);
}*/

void	ft_sort_all(t_list **hd, t_list **hd2)
{
	t_list	*head;
	t_list	*head2;

	head = *hd;
	head2 = *hd2;
	while (ft_where_is_max(head) < ft_stack_len(head) / 2)
	{
		ft_rra(&head);
		ft_putstr("rra\n");
		if (head->content < ft_median(head, ft_find_min(head, head2)))
			{
				ft_pa(&head2, &head);
				ft_putstr("pb\n");
			}
	}
	if (ft_is_sorted_before_max(head) == 0)
		ft_make_max_third(&head, &head2,ft_find_max(head));
	while (ft_sort_check(head) == 0)
		ft_count_to_position(&head, &head2);
	while (head2 != NULL)
		ft_move_back_to_a(&head, &head2);


	//head = *hd;
	//head2 = *hd2;
	/*printf("STACK A\n");
	t_list *x = head;
	while (x != NULL)
	{
		printf("%d\n", x->content);
		x = x->next;
	}
	printf("STACK B\n");
	t_list *y = head2;
	while (y != NULL)
	{
		printf("%d\n", y->content);
		y = y->next;
	}*/
	//124 mvs 10  18   1   6  16  12  20   3  13   7   8  14  11  19   4  15   9  17   2   5
}

int		main(int argc, char **argv)
{
	t_list *head;
	t_list *head2;
	head = NULL;
	head2 = NULL;
	if (argc == 2)
		return (1);
	head = ft_create_a(head, argv, argc);
	if (head == NULL)
		return (0);
	ft_sort_all(&head, &head2);

	return 0;
}
