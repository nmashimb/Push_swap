/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_moves_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 15:14:32 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:40:32 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_moves_valid(mvs_list *mhead)
{
	mvs_list	*t;

	t = mhead;
	while (t != NULL)
	{
		if (!ft_strcmp(mhead->content, "sa")\
		|| !ft_strcmp(mhead->content, "ra")\
		|| !ft_strcmp(mhead->content, "rra")\
		|| !ft_strcmp(mhead->content, "pa")\
		|| !ft_strcmp(mhead->content, "ss")\
		|| !ft_strcmp(mhead->content, "rr")\
		|| !ft_strcmp(mhead->content, "rrr")\
		|| !ft_strcmp(mhead->content, "sb")\
		|| !ft_strcmp(mhead->content, "rb")\
		|| !ft_strcmp(mhead->content, "rrb")\
		|| !ft_strcmp(mhead->content, "pb"))
			return (0);
		t = t->next;
	}
	return (1);
}
