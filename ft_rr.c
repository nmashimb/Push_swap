/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:45:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 16:55:54 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_list **hd1, t_list **hd2)
{
	t_list	*head1;
	t_list	*head2;

	head1 = *hd1;
	head2 = *hd2;
	ft_ra(&head1);
	ft_ra(&head2);
	*hd1 = head1;
	*hd2 = head2;
	head1 = NULL;
	head2 = NULL;
}
