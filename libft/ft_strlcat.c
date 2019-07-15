/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:36:10 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/14 18:35:34 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		dst_len;
	size_t		src_len;
	size_t		sum;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	sum = dst_len + src_len;
	if (dstsize < dst_len)
		return (dstsize + src_len);
	while (src[i] && (dstsize > dst_len + 1))
	{
		dst[dst_len++] = src[i];
		i++;
	}
	dst[dst_len] = '\0';
	return (sum);
}
