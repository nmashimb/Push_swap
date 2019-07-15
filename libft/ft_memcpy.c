/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:28:29 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/10 16:15:20 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*s_des;
	const char	*s_src;

	i = 0;
	if (!src && !dst)
		return (dst);
	s_des = (char *)dst;
	s_src = (const char *)src;
	while (i < n)
	{
		s_des[i] = s_src[i];
		i++;
	}
	return (dst);
}
