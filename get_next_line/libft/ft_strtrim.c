/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:52:54 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/14 14:49:17 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start_ind(char const *s, size_t start)
{
	while ((s[start] != '\0') && (s[start] == ' ' || s[start] == '\n'\
			|| s[start] == '\t'))
		start++;
	return (start);
}

static size_t	ft_end_ind(char const *s, size_t end)
{
	while (end >= 0 && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	return (end);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	if (!s)
		return (NULL);
	if (*s == '\0')
		return ((char *)s);
	start = ft_start_ind(s, start);
	if (s[start] == '\0')
		return (ft_strcpy(ft_strnew(1), ""));
	end = ft_strlen(s) - 1;
	end = ft_end_ind(s, end);
	str = (char *)malloc(end - start + 1 + 1);
	if (!str)
		return (0);
	i = 0;
	end = end - start + 1;
	str = ft_strncpy(str, s + start, end);
	str[end] = '\0';
	return (str);
}
