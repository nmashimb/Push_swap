/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:18:15 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 12:15:46 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **hd1, t_list **hd2)
{
	if (*hd2 == NULL)
	{
		ft_putstr("stack b is empty!!!\n");
		return ;
	}
	ft_push(hd1, (ft_pop(hd2)->content));
	ft_putstr("pa\n");
}
