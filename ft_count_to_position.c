/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_to_position.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:43:04 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/02 10:54:47 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_count_above(t_list **head, t_list **head2, int count)
{
	int		i;

	i = 0;
	while (i < count)
	{
		ft_pa(head2, head);
		ft_putstr("pb\n");
		i++;
	}
	if (ft_peek_last_cont(*head) != ft_find_max(*head))
		while (ft_peek(*head2) < ft_peek_last_cont(*head) &&\
		ft_peek_last_cont(*head) != ft_find_max(*head))
			ft_count_to_position(head, head2);
	while (count > 0)
	{
		ft_pa(head, head2);
		ft_putstr("pa\n");
		count--;
	}
}

static void		ft_count_below(t_list **head, int diff)
{
	int		i;
	int		hol;
	t_list		*h;

	i = 0;
	hol = ft_peek_last_cont(*head);
	while (i < diff)
	{
		ft_rra(head);
		ft_putstr("rra\n");
		h = *head;
		//addddedededed
		if (h->next->content == hol)
		{
			ft_sa(head);
			ft_putstr("sa\n");
		}
		i++;
	}
	while (diff > 0)
	{
		ft_ra(head);
		ft_putstr("ra\n");
		diff--;
	}
}

void			ft_count_to_position(t_list **head, t_list **head2)
{
	int		count;
	t_list	*t;

	t = *head;
	count = 0;
	while (ft_peek_last_cont(*head) > t->content)
	{
		count++;
		t = t->next;
	}
	if (count == 0)
	{
		ft_rra(head);
		ft_putstr("rra\n");
	}
	else if (count != 0 && ft_peek_last_cont(*head) != ft_find_max(*head))
	{
		if (count > ft_stack_len(*head) / 2)
			ft_count_below(head, ft_stack_len(*head) - count);
		else
			ft_count_above(head, head2, count);
	}
}
