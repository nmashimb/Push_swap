/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted_before_max.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 11:59:40 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/10 16:03:06 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_sorted_before_max(t_list *head)
{
	while (head->content != ft_find_max(head))
	{
		if (head->content > head->next->content)
			return (0);
		head = head->next;
	}
	return (1);
}
