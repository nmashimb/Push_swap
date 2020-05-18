/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/20 15:31:09 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		push_swap(t_list **head, int *arr)
{
	t_list	*head2;
	int		chunks;
	int		len;

	head2 = NULL;
	len = ft_stack_len(*head);
	if (ft_sort_check(*head) == 0 && ft_stack_len(*head) <= 500){
		if (ft_stack_len(*head) <= 3)
			ft_s_below_three(head);
		else if (ft_stack_len(*head) <= 5)
			ft_sort_five(head, &head2);
		else if (ft_stack_len(*head) <= 100){
			chunks = 5;
			ft_sort_hundred(head, &head2, arr, chunks, len);
		}
		else if (ft_stack_len(*head) <= 500){
			chunks = 11;
			ft_sort_hundred(head, &head2, arr, chunks, len);
		}
	}
	while (*head != NULL)
		ft_pop(head);
}

int		main(int argc, char **argv)
{
	t_list	*head;
	int		nums[argc - 1];
	int		snums[500];

	head = NULL;
	if (argc == 2){
		ft_fill_stack_and_update_argc(&head, argv, &argc, snums);
		if (argc == 2)
			return (0);
		if (head == NULL)
			return (0);
		ft_sorted_array(argc, snums);
		push_swap(&head, snums);
		free(argv);
	}
	else{
		head = ft_create_a(head, argv, argc);
		ft_sort_array_argv(argv, argc, nums);
		if (head == NULL)
			return (0);
		push_swap(&head, nums);
	}
	return (0);
}