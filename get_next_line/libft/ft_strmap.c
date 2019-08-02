/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:26:11 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/14 14:51:38 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*tmp;

	if (s == NULL)
		return (0);
	i = 0;
	len = ft_strlen(s);
	tmp = (char *)malloc(len + 1);
	if (tmp == NULL)
		return (0);
	while (i < len)
	{
		tmp[i] = f(s[i]);
		i++;
	}
	tmp[len] = '\0';
	return (tmp);
}
