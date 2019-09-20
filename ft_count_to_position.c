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

static	void	ft_while_diff_not_zero(t_list **head,  int diff)
{
	/*while (ft_peek(*head) > ft_peek(*head2) && ft_peek(*head2) > ft_peek_last_cont(*head))
	{
		ft_pa(head, head2);
		ft_putstr("pushit\n");
		diff++;
	}*/
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
		ft_pa(head2, head);
		ft_putstr("pb\n");
		i++;
	}
	ft_rra(head);
	ft_putstr("rra\n");
	while ((*head)->content > ft_peek_last_cont(*head) && ft_peek_last_cont(*head) > ft_peek(*head2))
	{//lessoned moves
		ft_rra(head);
		ft_putstr("while\n");
	}
	while (count > 0)
	{
		ft_pa(head, head2);
		ft_putstr("pa\n");
		count--;
	}
}

static void		ft_count_below(t_list **head, t_list **head2, int diff)
{
	int			i;
//	int			hol_first;
	int			hol_last;
//	t_list		*h;

	i = 0;
	//hol_first = ft_peek(*head);
	hol_last = ft_peek_last_cont(*head);
	while (i < diff)
	{
		ft_rra(head);
		ft_putstr("rra\n");
		//h = *head;
		//addddded
		if (ft_peek(*head) > ft_median(*head, ft_find_min(*head, *head2)) && ft_peek(*head) != ft_find_max(*head) && ft_peek(*head) != hol_last && ft_peek(*head) != hol_last)
		{
			diff--;
			ft_pa(head2, head);
			ft_putstr("push to b\n");
		}
		if ((*head)->next->content == hol_last)
		{
			ft_sa(head);
			ft_putstr("sa\n");
		}
		i++;
	}
	ft_while_diff_not_zero(head, diff);
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
			ft_count_below(head, head2, ft_stack_len(*head) - count);
		else
			ft_count_above(head, head2, count);
	}
}
