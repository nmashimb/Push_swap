/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:20:31 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/27 11:51:13 by nmashimb         ###   ########.fr       */
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

t_list		*ft_make_top_max(t_list	*h, int max)
{
	t_list	*t;

	t = h;
	while (max != h->content)
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

void	ft_make_top_last(t_list	**head)
{
	t_list	*h;

	h = *head;
	printf("%d\n\n\n", ft_peek_last_cont(*head));
	while (max != ft_peek_last_cont(*head))
	{

	}
}

void	ft_sort_all(t_list	**hd)
{
	t_list	*head;

	head = *hd;
	head = ft_make_top_max(*hd, ft_find_max(head));
	if (ft_sort_check(head->next) == 1)
		ft_sort_after_max(&head);
	//operations until top is last
	ft_make_top_last(&head);
	
	t_list	*x = head;
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
	head = ft_create_a(head, argv, argc);
	ft_sort_all(&head);
	return (0);
}
