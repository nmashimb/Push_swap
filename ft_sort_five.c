/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/09/20 15:31:09 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_five(t_list **head, t_list **head2)
{
    while (ft_stack_len(*head) != 3){
        ft_pa(head2, head);
        ft_putstr("pb\n");
    }
    ft_s_below_three(head);
    while (*head2 != NULL)
        ft_move_back_to_a(head, head2);
}