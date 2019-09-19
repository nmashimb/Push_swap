/* w************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_from_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:01:24 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/19 18:06:22 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_while_diff_not_zero(t_list **head, t_list **head2, int diff)
{
	ft_pa(head, head2);
	ft_putstr("pa\n");
	while (diff > 0)
	{
		ft_ra(head);
		ft_putstr("ra\n");
		diff--;
	}
}

static void		ft_count_above(t_list **head, t_list **head2, int count)
{
	int		i;
	int		sub;

	i = 0;
	sub = 0;
	while (i < count)
	{
		ft_ra(head);
		ft_putstr("ra\n");
		i++;
	}
	ft_pa(head, head2);
	ft_putstr("pa\n");
	while (count > 0)
	{
		ft_rra(head);
		ft_putstr("rra\n");
		count--;
	}
}

static void		ft_count_below(t_list **head, t_list **head2, int diff)
{
	int			i;
	int			count;

	i = 0;
	count = 0;
	while (i < diff)
	{
		ft_rra(head);
		ft_putstr("rra\n");
		i++;
	}
	ft_while_diff_not_zero(head, head2, diff + 1);
}

void			ft_count_to_position(t_list **head, t_list **head2)
{
	int		count;
	t_list	*t;

	t = *head;
	count = 0;
	while (*head2 != NULL && ft_peek(*head2) > t->content)
	{
		count++;
		t = t->next;
	}
	if (*head != NULL && count == 0)
	{
		ft_pa(head, head2);
		ft_putstr("pa\n");
	}
	else if (count != 0 && ft_peek_last_cont(*head) != ft_find_max(*head))
	{
		if (count > ft_stack_len(*head) / 2)
			ft_count_below(head, head2, ft_stack_len(*head) - count);
		else
			ft_count_above(head, head2, count);
	}
}
