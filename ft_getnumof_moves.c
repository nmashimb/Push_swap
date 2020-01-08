/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnumof_moves.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:38:59 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/10 10:42:19 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int      ft_getnumof_moves(int pos, t_list *head)
{
    int     movs;

    if (pos <= ft_stack_len(head)/2)
        movs = pos - 1;
    else
        movs = ft_stack_len(head) - pos + 1;
    return (movs);
}