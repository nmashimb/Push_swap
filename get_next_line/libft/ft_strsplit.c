/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:08:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/06/14 14:44:21 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_words(char const *s, char c)
{
	size_t	i;
	size_t	wrd_c;

	i = 0;
	wrd_c = 0;
	while (s[i])
	{
		if (s[i] == c)
			while (s[i] == c)
				i++;
		if (s[i])
		{
			wrd_c++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wrd_c);
}

static	size_t	ft_num_chr(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**str;

	if (!s)
		return (NULL);
	len = ft_num_words(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			str[j] = ft_strsub(s, i, ft_num_chr(&s[i], c));
			j++;
			i = i + ft_num_chr(&s[i], c);
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	str[j] = NULL;
	return (str);
}
