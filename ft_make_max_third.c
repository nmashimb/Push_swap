/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_max_third.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:55:12 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/02 11:17:59 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list		*ft_make_max_third(t_list *head, int max)
{
	if (head->content == ft_find_max(head))
		ft_rra_times(&head, 2);
	else if (head->next->content == ft_find_max(head))
		ft_rra_times(&head, 1);
	while (max != head->next->next->content)
	{
		if (head->content != max && head->content > head->next->content)
		{
			ft_sa(&head);
			ft_putstr("sa\n");
		}
		if (head->content != max)
		{
			ft_ra(&head);
			ft_putstr("ra\n");
		}
	}
	if (head->content > head->next->content)
	{
		ft_sa(&head);
		ft_putstr("sa\n");
	}
	return (head);
}
