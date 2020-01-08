/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_to_position.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:33:48 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/20 17:56:09 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_count_above(t_list **head, t_list **head2, int count)
{
	int		i;
	int		sub;

	i = 0;
	sub = 0;
	while (i < count)
	{
		ft_ra(head2);
		ft_putstr("rb\n");
		i++;
	}
	ft_pa(head2, head);
	ft_putstr("pb\n");
	while (count > 0)
	{
		ft_rra(head2);
		ft_putstr("rrb\n");
		count--;
	}
}

static void		ft_count_below(t_list **head, t_list **head2, int diff)
{
	int			i;

	i = 0;
	while (i < diff)
	{
		ft_rra(head2);
		ft_putstr("rrb\n");
		i++;
	}
	ft_pa(head2, head);
	ft_putstr("pb\n");
	while (diff >= 0)
	{
		ft_ra(head2);
		ft_putstr("rb\n");
		diff--;
	}
}

void			ft_count_to_position(t_list **head, t_list **head2)
{
	int		count;
	t_list	*t;

	t = *head2;
	count = 0;
	while ((*head)->content > t->content)
	{
		count++;
		t = t->next;
	}
	if (count == 0)
	{
		ft_pa(head2, head);
		ft_putstr("pb\n");
	}
	else{
		if (count > ft_stack_len(*head2) / 2)
			ft_count_below(head, head2, ft_stack_len(*head2) - count);
		else
			ft_count_above(head, head2, count);
	}
}
