/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:57:36 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/11 11:25:49 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i <= size + 1)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
