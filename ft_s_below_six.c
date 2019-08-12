/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_below_six.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:43:01 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/12 17:22:20 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_s_below_six(t_list **hd)
{
	t_list	*head;
	t_list	*head2;
	t_list	*t;
	int		count;
	int		c;

	head = *hd;
	head2 = NULL;
	while (ft_stack_len(head) != 3)
	{
		ft_pa(&head2, &head);
		ft_putstr("pb\n");
	}
	ft_s_below_three(&head);
	while (head2 != NULL)
	{
		t = head;
		count = 0;
		//swap stack b if necessary
		if (ft_stack_len(head2) == 2 && (head2->content < head2->next->content))
		{
			ft_sa(&head2);
			ft_putstr("sb\n");
		}
		if (ft_stack_len(head2) == 3)
		{
			if (head2->content > head2->next->content && head2->content < head2->next->next->content)
			{
				ft_rra(&head2);
				ft_putstr("rrb\n");
			}
			if (head2->content < head2->next->content && head2->content > head2->next->next->content)
			{
				ft_sa(&head2);
				ft_putstr("sb\n");
			}
			if (head2->content < head2->next->content && head2->content < head2->next->next->content)
			{
				if (head2->next->content > head2->next->next->content)
				{
					ft_sa(&head2);
					ft_putstr("sb\n");
				}
				if (head2->next->content < head2->next->next->content)
				{
					ft_rra(&head2);
					ft_putstr("rrb\n");
				}
			}
		}
		/////////////////////////////////////////////////////////////
		while (ft_stack_len(head) > count && ft_peek(head2) > t->content)
		{
			count++;
			t = t->next;
		}
		if (count == 0)
		{
			ft_pa(&head, &head2);
			ft_putstr("pa\n");
		}
		if (count == 1)
		{
			ft_pa(&head, &head2);
			ft_putstr("pa\n");
			ft_sa(&head);
			ft_putstr("sa\n");
		}
		if (count >= 2)
		{
			c = count - 1;
			while (c >= 0)
			{
				ft_ra(&head);
				ft_putstr("ra\n");
				c--;
			}
			//could add expr to keep top num of b max
			ft_pa(&head, &head2);
			ft_putstr("pa\n");
			while (c < count - 1)
			{
				ft_rra(&head);
				ft_putstr("rra\n");
				c++;
			}
		}
		if (count == ft_stack_len(head))
		{
			ft_pa(&head, &head2);
			ft_putstr("pa\n");
			ft_ra(&head);
			ft_putstr("ra\n");
		}
	}

	t = head;
	ft_putstr("STACK A\n");
	while (t != NULL)
	{
		printf("%d\n", t->content);
		t = t->next;
	}
	ft_putstr("STACK B\n");
	t_list *x = head2;
	while (x != NULL)
	{
		printf("%d\n", x->content);
		x = x->next;
	}
}

int		main(int argc, char **argv)
{
	t_list	*head;

	head = NULL;
	if (argc == 2)
		return (1);
	head = ft_create_a(head, argv, argc);
	ft_s_below_six(&head);
	return (0);
}
