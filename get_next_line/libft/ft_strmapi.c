/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:34:26 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/11 12:31:22 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[len] = '\0';
	return (tmp);
}
