/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:04:59 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/14 17:27:38 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i <= ft_strlen(s1) && i < n)
	{
		if (s1[i] != s2[i])
		{
			if (ft_isascii(s1[i]) == 1 && ft_isascii(s2[i]) == 1)
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			else
				return (s2[i] - s1[i]);
		}
		i++;
	}
	return (0);
}
