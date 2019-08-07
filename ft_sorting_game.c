/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_game.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:57:26 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/07 18:45:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sorting_game(t_list **hd1, t_list **hd2, mvs_list *mhead)
{
	t_list		*head1;
	t_list		*head2;
	mvs_list	*t;

	head1 = *hd1;
	head2 = *hd2;
	t = mhead;
	while (t != NULL)
	{
		if ((ft_strcmp(t->content, "sa")) == 0)
			ft_sa(&head1);
		else if ((ft_strcmp(t->content, "ra")) == 0)
			ft_ra(&head1);
		else if ((ft_strcmp(t->content, "rra")) == 0)
			ft_rra(&head1);
		else if ((ft_strcmp(t->content, "pa")) == 0)
			ft_pa(&head1, &head2);
		else if ((ft_strcmp(t->content, "sb")) == 0)
			ft_sa(&head2);
		else if ((strcmp(t->content, "rb")) == 0)
			ft_ra(&head2);
		else if ((ft_strcmp(t->content, "rrb")) == 0)
			ft_rra(&head2);
		else if ((ft_strcmp(t->content, "pb")) == 0)
			ft_pa(&head2, &head1);
		else if ((ft_strcmp(t->content, "ss")) == 0)
			ft_ss(&head1, &head2);
		else if ((ft_strcmp(t->content, "rr")) == 0)
			ft_rr(&head1, &head2);
		else if ((ft_strcmp(t->content, "rrr")) == 0)
			ft_rrr(&head1, &head2);
		else
		{
			ft_putstr("Error\n");
			return ;
		}
		t = t->next;
	}
	*hd1 = head1;
	*hd2 = head2;
}
