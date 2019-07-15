/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:31:34 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/11 10:55:06 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s_des;
	char	*s_src;

	i = 0;
	s_des = (char *)dst;
	s_src = (char *)src;
	if (!s_src && !s_des)
		return (NULL);
	if (s_src > s_des)
	{
		while (i < len)
		{
			s_des[i] = s_src[i];
			i++;
		}
	}
	if (s_src < s_des)
	{
		while (len--)
			s_des[len] = s_src[len];
	}
	return (dst);
}
