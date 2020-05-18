/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_chunk_index.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:50:22 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 11:27:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int      ft_get_number_indx(int *arr, int num, int len, int i)
{
    while (i < len)
    {
        if (arr[i] == num)
            return (i);
        i++;
    }
    return (0);
}

void            ft_update_chunk_index(t_list **head, int *arr, int *indx, int len)
{
    int     sgn;
    t_list  *trav;

    sgn = 0;
    trav = *head;
    while (trav != NULL){
        if (sgn == 0 && (arr[indx[3]] <= trav->content && trav->content <= arr[indx[2]])){
            sgn = 1;
            indx[0] = ft_get_number_indx(arr, trav->content, len, indx[3]);
        }
        else if (arr[indx[3]] <= trav->content && trav->content <= arr[indx[2]])
            indx[1] = ft_get_number_indx(arr, trav->content, len, indx[3]);
        trav = trav->next;
    }
}