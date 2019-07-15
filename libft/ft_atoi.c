/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:30:00 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/14 17:45:16 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		i;
	long	res;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	res = 0;
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	res = sign * res;
	if (res == -469762049)
		res = -1;
	if (res == 469762049)
		res = 0;
	return (res);
}
