/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack_and_update_argc.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/20 15:31:09 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_fill_stack_and_update_argc(t_list **head, char **argv, int *argcadr, int *snums)
{
	int		i;
	char	**hol;

	hol = ft_strsplit(argv[1], ' ');
	argv = hol;	
	i = 0;
	while (hol[i] != NULL){
		hol[i] = ft_strtrim(hol[i]);
		i++;
	}	
	i++;
	*argcadr =  i;
	if (ft_is_argv_valid(i - 1, argv, 0) == 0)
		return ;
	ft_fill_stack(head, hol, i, snums);
}