/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_below_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:53:37 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/19 11:53:59 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_agreater_bc(t_list **hd)
{
	t_list	*head;

	head = *hd;
	if (head->next->content > head->next->next->content)
	{
		ft_sa(hd);
		ft_putstr("sa\n");
		ft_rra(hd);
		ft_putstr("rra\n");
	}
	else if (head->next->content < head->next->next->content)
	{
		ft_rra(hd);
		ft_putstr("rra\n");
		ft_rra(hd);
		ft_putstr("rra\n");
	}
}

static	void	ft_aless_bc(t_list **hd)
{
	ft_rra(hd);
	ft_putstr("rra\n");
	ft_sa(hd);
	ft_putstr("sa\n");
}

static	void	ft_sa_two_nu(t_list **hd)
{
	ft_sa(hd);
	ft_putstr("sa\n");
}

static void		ft_rra_three_nu(t_list **hd)
{
	ft_rra(hd);
	ft_putstr("rra\n");
}

void			ft_s_below_three(t_list **hd)
{
	t_list *head;

	head = *hd;
	if (ft_sort_check(head))
		return ;
	if (ft_stack_len(head) == 2)
		ft_sa_two_nu(hd);
	else if (ft_stack_len(head) == 3)
	{
		if (head->content < head->next->content && \
			head->content < head->next->next->content)
			ft_aless_bc(hd);
		else if (head->content < head->next->content &&\
				head->content > head->next->next->content)
			ft_rra_three_nu(hd);
		else if (head->content > head->next->content &&\
				head->content < head->next->next->content)
		{
			ft_sa(hd);
			ft_putstr("sa\n");
		}
		else if (head->content > head->next->content &&\
				head->content > head->next->next->content)
			ft_agreater_bc(hd);
	}
}
