/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_argv_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:59:51 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 12:57:52 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_argv_valid(int argc, char **argv, int i)
{
	while (i < argc)
	{
		if (!(ft_isnumber(argv[i])) || (ft_duplicates(i, argv) == 1)\
		|| ft_atoi(argv[i]) == -2147483648)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
		
	}
	return (1);
}
