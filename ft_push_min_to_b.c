/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_min_to_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:50:22 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 11:27:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static  int     ft_min_of_a(t_list *head)
{
	t_list	*h;
	int		min;

	h = head;
	min = ft_peek(h);
	while (h != NULL)
	{
		if (h->content < min)
			min = h->content;
		h = h->next;
	}
    return (min);
}

static void		ft_above_half(t_list **head, t_list **head2, int count)
{
	int		i;

	i = 0;
    count = ft_stack_len(*head) - count;
	while (i < count + 1){
		ft_rra(head);
		ft_putstr("rra\n");
		i++;
	}
    ft_pa(head2, head);
    ft_putstr("pb\n");
}

static void		ft_below_half(t_list **head, t_list **head2, int count)
{
	int		i;

	i = 0;
	while (i < count - 1){
		ft_ra(head);
		ft_putstr("ra\n");
		i++;
	}
    ft_pa(head2, head);
    ft_putstr("pb\n");
}

void            ft_push_min_to_b(t_list **head, t_list **head2)
{
    int pos;
    int i;
    
    i = 0;
    while (*head != NULL){
        pos = ft_get_position(*head, ft_min_of_a(*head));
        if (pos <= ft_stack_len(*head)/2 || ft_stack_len(*head)/2 == 0)
            ft_below_half(head, head2, pos);
        else
            ft_above_half(head, head2, pos);
        i++;
    }
}