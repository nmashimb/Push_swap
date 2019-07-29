/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:50:22 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/29 17:12:31 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list		*ft_create_a(t_list *head, char **argv, int argc)
{
	int		i;
	int		nums[argc - 1];

	if (ft_is_argv_valid(argc, argv) == 0)
		return (NULL);
	i = 0;
	while (i < argc - 1)
	{
		nums[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (0 <= argc - 2)
	{
		ft_push(&head, nums[argc - 2]);
		argc--;
	}
	return (head);
}
