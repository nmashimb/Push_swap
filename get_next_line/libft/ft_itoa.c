/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:21:15 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/12 11:21:59 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*assign_num(int end, int i, int n, char *s)
{
	while (end <= i)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (s);
}

static int		put_negative(char *str, int n)
{
	if (n < 0)
	{
		str[0] = '-';
		n = -(n);
		return (n);
	}
	return (n);
}

char			*ft_itoa(int n)
{
	int		i;
	int		end;
	int		len;
	char	*str;

	i = n;
	end = 0;
	len = 1;
	if (n < 0)
	{
		i = (-1) * n;
		end++;
		len = 2;
	}
	while ((i = i / 10) != 0)
		len++;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (0);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	n = put_negative(str, n);
	assign_num(end, len - 1, n, str);
	str[len] = '\0';
	return (str);
}
