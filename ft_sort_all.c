/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:20:31 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/03 12:44:53 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_all(t_list **hd, t_list **hd2)
{
	t_list	*head;
	t_list	*head2;

	head = *hd;
	head2 = *hd2;
	if (ft_is_sorted_before_max(head) == 0)
		head = ft_make_max_third(*hd, ft_find_max(head));
	while (ft_sort_check(head) == 0)
		ft_count_to_position(&head, &head2);
}
