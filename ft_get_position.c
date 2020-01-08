/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:38:59 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/10 10:42:19 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_get_position(t_list *head, int num)
{
    int     count;
    t_list  *trav;

    count = 1;
    trav = head;
    while (trav != NULL)
    {
        if (num == trav->content)
        {
            return (count);
        }
        trav = trav->next;
        count++;
    }
    return (-1);
}