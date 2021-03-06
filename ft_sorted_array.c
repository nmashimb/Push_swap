/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:50:22 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 11:27:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sorted_array(int argc, int *nums)
{
	int		i;
    int     hold;

    i = 0;
    while (i < argc - 1)
    {
        if (nums[i] > nums[i + 1])
        {
            hold = nums[i];
            nums[i] = nums[i + 1];
            nums[i + 1] = hold;
            i = -1;
        }
        i++;
    }
}