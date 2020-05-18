/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/20 15:31:09 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				ft_fill_stack(t_list **head, char **hol, int argc, int *snums)
{
	int		i;
	int		c;

	i = 0;
	while (i < argc - 1)
	{
		snums[i] = ft_atoi(hol[i]);
		i++;
	}
	c = argc - 2;
	while (0 <= c)
	{
		ft_push(head, snums[c]);
		c--;
	}
}