/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicates.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 17:55:19 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/02 13:39:34 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_duplicates(int curr_indx, char **argv)
{
	int		i;

	i = curr_indx - 1;
	while (1 <= i)
	{
		if (ft_strcmp(argv[i], argv[curr_indx]) == 0)
			return (1);
		i--;
	}
	return (0);
}
