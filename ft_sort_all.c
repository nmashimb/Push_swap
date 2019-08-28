/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:20:31 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/28 17:17:54 by nmashimb         ###   ########.fr       */
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

void	ft_rra_times(t_list **head, int times)
{
	int		i;
	t_list	*t;

	i = 0;
	while (i < times)
	{
		ft_rra(head);
		ft_putstr("rra\n");
		i++;
	}
	t = *head;
	if (t->content > t->next->content)
	{
		ft_sa(head);
		ft_putstr("sa\n");
	}
}

static void		ft_count_to_position(t_list **head, t_list **head2)
{
	int		count;
	int		i;
	t_list	*t;

	t = *head;
	count = 0;
	while (ft_peek_last_cont(*head) > t->content)
	{
		count++;
		t = t->next;
	}
	i = 0;
	while (i < count)
	{
		ft_pa(head2, head);
		ft_putstr("pb\n");
		i++;
	}
	//rra as long as last item greater than top of b
	while (ft_peek(*head2) < ft_peek_last_cont(*head) && ft_peek_last_cont(*head) != ft_find_max(*head))
	{
		ft_rra(head);
		ft_putstr("rra\n");
		t = *head;
		if (ft_peek(*head) > t->next->content && t->next->content != ft_find_max(*head))
		{
			ft_sa(head);
			ft_putstr("sa\n");
		}
	}
	while (count > 0)
	{
		ft_pa(head, head2);
		ft_putstr("pa\n");
		count--;
	}
}

void			ft_cmp_top_sec_last(t_list	**head, t_list **head2)
{
	t_list	*h;

	while (ft_peek(*head) > ft_peek_last_cont(*head) && (ft_peek_last_cont(*head) < ft_peek(*head2) || *head2 == NULL))
	{// f > l < f(b) 
		ft_rra(head);
		ft_putstr("rra\n");
	}
	h = *head;
	//clashes with the while loop above with 5 1 4 3 2
	/*if (h->content < ft_peek_last_cont(h) < h->next->content) //1 f < l < s
	{
		ft_rra(head);
		ft_putstr("rra\n");
		ft_sa(head);
		ft_putstr("sa\n");
	}*/
	if (h->content > ft_peek_last_cont(h) && ft_peek_last_cont(h) < h->next->content && ft_peek_last_cont(*head) != ft_find_max(*head)) //2 f > l < s
	{
		ft_sa(head);
		ft_putstr("sa\n");
		ft_rra(head);
		ft_putstr("rra\n");
	}
	 if (h->content < ft_peek_last_cont(h) && ft_peek_last_cont(h) > h->next->content && ft_peek_last_cont(*head) != ft_find_max(*head)) //3 f < l > s
		ft_count_to_position(head, head2);
}

void	ft_make_top_last(t_list	**head, t_list **head2)
{
	t_list	*h;

	h = *head;
	//while (ft_find_max(h) != ft_peek_last_cont(h))
	//{
		if (ft_find_max(h) == h->content)
			ft_rra_times(head, 2);
		ft_cmp_top_sec_last(head, head2);
		ft_cmp_top_sec_last(head, head2);
	//}
}

void	ft_sort_all(t_list	**hd, t_list **hd2)
{
	t_list	*head;

	head = *hd;
	t_list	*head2 = *hd2; //?????????
	head = ft_make_top_max(*hd, ft_find_max(head));
	if (ft_sort_check(head->next) == 1)
		ft_sort_after_max(&head);
	//operations until top is last
	ft_make_top_last(&head, &head2);
	
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
