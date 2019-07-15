/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:26:41 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/10 16:39:02 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_des;
	unsigned char	*s_src;

	i = 0;
	if (!dst && !src)
		return (dst);
	s_des = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	while (i < n)
	{
		s_des[i] = s_src[i];
		if (s_src[i] == (unsigned char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
