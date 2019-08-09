/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:16:05 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 12:17:31 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **hd1, t_list **hd2)
{
	if (*hd2 == NULL)
	{
		ft_putstr("Error\n");
		return ;
	}
	ft_push(hd1, (ft_pop(hd2)->content));
	ft_putstr("pb\n");
}
