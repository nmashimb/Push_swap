/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_game.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:57:26 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 16:59:16 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sorting_game(t_list **hd1, t_list **hd2, char **arr_moves)
{
	int		i;
	t_list	*head1;
	t_list	*head2;

	i = 0;
	head1 = *hd1;
	head2 = *hd2;
	while (arr_moves[i] != '\0')
	{
		if (ft_strcmp(arr_moves[i], "sa"))
			ft_sa(&head1);
		else if (ft_strcmp(arr_moves[i], "ra"))
			ft_ra(&head1);
		else if (ft_strcmp(arr_moves[i], "rra"))
			ft_rra(&head1);
		else if (ft_strcmp(arr_moves[i], "pa"))
			ft_pa(&head1, &head2);
		else if (ft_strcmp(arr_moves[i], "sb"))
			ft_sa(&head2);
		else if (strcmp(arr_moves[i], "rb"))
			ft_ra(&head2);
		else if (ft_strcmp(arr_moves[i], "rrb"))
			ft_rra(&head2);
		else if (ft_strcmp(arr_moves[i], "pb"))
			ft_pa(&head2, &head1);
		else if (ft_strcmp(arr_moves[i], "ss"))
			ft_ss(&head1, &head2);
		else if (ft_strcmp(arr_moves[i], "rr"))
			ft_rr(&head1, &head2);
		else if (ft_strcmp(arr_moves[i], "rrr"))
			ft_rrr(&head1, &head2);
		else
			return ;
		i++;
	}
	*hd1 = head1;
	*hd2 = head2;
	head1 = NULL;
	head2 = NULL;
}
