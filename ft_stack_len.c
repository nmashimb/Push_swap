/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 10:53:32 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/24 17:17:32 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_stack_len(t_list *head)
{
	t_list	*travers;
	int		len;

	len = 0;
	travers = head;
	while (travers != NULL)
	{
		travers = travers->next;
		len++;
	}
	return (len);
}
