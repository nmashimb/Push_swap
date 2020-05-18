/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:50:22 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 11:27:51 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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

static  void    ft_sort_hund_get_number_to_b(t_list **head, t_list **head2, int cord)
{
    if (cord <= ft_stack_len(*head)/2 + 1 || ft_stack_len(*head)/2 == 0)
        ft_below_half(head, head2, cord);
    else
        ft_above_half(head, head2, cord);
}

static void     ft_update_index_arr(int chunks, int len, int *indx, int i)
{
    indx[0] = i * (len/chunks);
    indx[1] = indx[0] + 1;
    indx[2] = (i + 1) * (len/chunks) - 1;
    indx[3] = indx[0];
}

static  void    ft_back_to_a(t_list **head, t_list **head2)
{
    if (head != NULL)
        ft_push_min_to_b(head, head2);
    ft_push_max_to_a(head, head2);
}

void            ft_sort_hundred(t_list **head, t_list **head2, int *arr, int chunks, int len)
{
    int     indx[4];
    int     cord[2];
    int     i_and_j[2];

    i_and_j[0] = 0;
    while ( i_and_j[0] < chunks){
        i_and_j[1] = 0;
        ft_update_index_arr(chunks, len, indx, i_and_j[0]);
        while (i_and_j[1] < len/chunks){
           // printf("start %d   end %d\n", indx[3],indx[2]);
            ft_update_chunk_index(head, arr,  indx, len);
            cord[0] = ft_get_position(*head, arr[indx[0]]);
            cord[1] = ft_get_position(*head, arr[indx[1]]);
            if (ft_getnumof_moves(cord[0], *head) >= 0 && ft_getnumof_moves(cord[0], *head) \
            <= ft_getnumof_moves(cord[1], *head) && (cord[0] != - 1 || cord[1] == - 1)){
                ft_sort_hund_get_number_to_b(head, head2, cord[0]);
            }
            else if (cord[1] != -1){
                ft_sort_hund_get_number_to_b(head, head2, cord[1]);
            }
            i_and_j[1]++;
        }
        i_and_j[0]++;
    }
    ft_back_to_a(head, head2);
}

/*int     main(int argc, char **argv){
    t_list *head;
    t_list *head2;
    int     len;
    int     arr[argc - 1];

    head = NULL;
    head2 = NULL;

    head = ft_create_a(head, argv, argc);
    ft_sort_array_argv(argv, argc, arr);
    len = ft_stack_len(head);
    ft_sort_hundred(&head, &head2, arr, 5, len);
 
    printf("STACK A\n");
	t_list *t = head;
	while (t != NULL){
		printf("%d  ", t->content);
		t = t->next;
	}
	printf("\n\nSTACK B\n");
	t_list *tt = head2;
	while (tt != NULL){
		printf("%d  ", tt->content);
		tt = tt->next;
	}
    return (0);
}*/