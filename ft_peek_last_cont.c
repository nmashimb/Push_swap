/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_peek_last_cont.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:32:21 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/02 10:42:50 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_peek_last_cont(t_list *head)
{
	t_list	*trv;

	trv = head;
	while (trv->next != NULL)
		trv = trv->next;
	return (trv->content);
}
