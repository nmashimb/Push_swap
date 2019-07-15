/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:53:37 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/12 11:34:06 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*hold_str;

	i = 0;
	hold_str = (unsigned char *)b;
	while (i < len)
	{
		hold_str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
