/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_below_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:53:37 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 12:56:22 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_s_below_three(t_list **hd)
{
	t_list *head;

	head = *hd;
	if (ft_stack_len(head) == 2)
	{
		ft_sa(hd);
		ft_putstr("sa\n");
	}
	else if (ft_stack_len(head) == 3)
	{
		if (head->content < head->next->content && head->content < head->next->next->content) //a<b a<c 4
		{
			ft_rra(hd);
			ft_putstr("rra\n");
			ft_sa(hd);
			ft_putstr("sa\n");
		}
		else if (head->content < head->next->content && head->content > head->next->next->content)//a<b a>c 3
		{
			ft_rra(hd);
			ft_putstr("rra\n");
		}
		else if (head->content > head->next->content && head->content < head->next->next->content)//a>b a<c 2
		{
			ft_sa(hd);
			ft_putstr("sa\n");
		}
		//make a function for this
		else if (head->content > head->next->content && head->content > head->next->next->content)//a>b a>c 1
		{
			if (head->next->content > head->next->next->content) // (a)
			{
				ft_sa(hd);
				ft_putstr("sa\n");
				ft_rra(hd);
				ft_putstr("rra\n");
			}
			else if (head->next->content < head->next->next->content) // (b)
			{
				ft_rra(hd);
				ft_putstr("rra\n");
				ft_rra(hd);
				ft_putstr("rra\n");
			}
		}
	}
}
