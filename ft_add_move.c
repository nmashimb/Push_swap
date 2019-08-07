/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:14:01 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/07 10:51:25 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_move(mvs_list **mhead, mvs_list **mtl, char *move)
{
	mvs_list	*p;
	mvs_list	*mtail;

	mtail = *mtl;
	p = (mvs_list *)malloc(sizeof(mvs_list));
	p->content = move;
	if (*mhead == NULL)
	{
		p->next = NULL;
		*mhead = p;
		mtail = p;
	}
	else
	{
		mtail->next = p;
		mtail = p;
		p->next = NULL;
	}
	*mtl = mtail;
	p = NULL;
}
