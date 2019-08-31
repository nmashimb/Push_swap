/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:20:31 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/31 14:56:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int		ft_find_max(t_list *head)
{
	int		max;
	t_list	*t;

	t = head;
	max = 0;
	while (t != NULL)
	{
		if (max < t->content)
			max = t->content;
		t = t->next;
	}
	return (max);
}

t_list		*ft_make_max_third(t_list	*h, int max)
{
	t_list	*t;

	t = h;
	while (max != h->next->next->content)
	{
		if (h->content != max && h->content > h->next->content)
		{
			ft_sa(&h);
			ft_putstr("sa\n");
		}
		if (h->content != max)
		{
			ft_ra(&h);
			ft_putstr("ra\n");
		}
	}
	if (h->content > h->next->content)
	{
		ft_sa(&h);
		ft_putstr("sa\n");
	}
	return (h);
}

void	ft_sort_after_max(t_list **head)
{
	while (ft_sort_check(*head) == 0)
	{
		ft_rra(head);
		ft_putstr("rra\n");
	}
}

int		ft_peek_last_cont(t_list *head)
{
	t_list	*trv;

	trv = head;
	while (trv->next != NULL)
		trv = trv->next;
	return (trv->content);
}

static void		ft_count_below(t_list **head, int diff)
{
	int		i;

	i = 0; 
	while (i < diff)
	{
		ft_rra(head);
		ft_putstr("rra\n");
		/*if (i == 1)
		{
			ft_sa(head);
			ft_putstr("sa\n");
		}*/
		i++;
	}
	while (diff > 0)
	{
		ft_ra(head);
		ft_putstr("ra\n");
		diff--;
	}
}

static	void	ft_count_to_position(t_list **head, t_list **head2);
static	void	ft_count_above(t_list **head, t_list **head2, int count)
{
	int		i;

	i = 0;
	printf("dddd\n");
	while (i < count)
	{
		ft_pa(head2, head);
		ft_putstr("pb\n");
		i++;
	}
	if (ft_peek_last_cont(*head) != ft_find_max(*head))
		while (ft_peek(*head2) < ft_peek_last_cont(*head)\
			&& ft_peek_last_cont(*head) != ft_find_max(*head))
		ft_count_to_position(head, head2);
	while (count > 0)
	{
		ft_pa(head, head2);
		ft_putstr("pa\n");
		count--;
	}
}

static void		ft_count_to_position(t_list **head, t_list **head2)
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
		printf("ddswde\n");
		if (count > ft_stack_len(*head) / 2)
			ft_count_below(head, ft_stack_len(*head) - count);
		else
			ft_count_above(head, head2, count);
	}
}

void	ft_sort_all(t_list	**hd, t_list **hd2)
{
	t_list	*head;

	head = *hd;
	t_list	*head2 = *hd2; //?????????
	head = ft_make_max_third(*hd, ft_find_max(head));
	//if (ft_sort_check(head->next) == 1)
	//	ft_sort_after_max(&head);
	//operations until top is last
	//ft_count_to_position(hd, hd2);
	//ft_count_to_position(hd, hd2);
	//ft_count_to_position(hd, hd2);
	
	t_list	*x = head;
	printf("STACK A\n");
	while (x != NULL)
	{
		printf("%d\n", x->content);
		x = x->next;
	}
	t_list	*y = head2;
	printf("STACK B\n");
	while (y != NULL)
	{
		printf("%d\n", y->content);
		y = y->next;
	}
}

int		main(int argc, char **argv)
{
	t_list	*head;
	t_list	*head2;

	head = NULL;
	head2 = NULL;
	head = ft_create_a(head, argv, argc);
	ft_sort_all(&head, &head2);
	return (0);
}
