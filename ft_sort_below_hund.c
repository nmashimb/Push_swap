/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_below_hund.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:50:05 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 12:02:45 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void		ft_below_half(t_list **head, t_list **head2, int count)
{
	int		i;

	i = 0;
	while (i < count - 1)
	{
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
	while (i < count + 1)
	{
		ft_rra(head);
		ft_putstr("rra\n");
		i++;
	}
	ft_pa(head2, head);
	ft_putstr("pb\n");
}

static int     ft_get_position(t_list *head, int num)
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

static int      ft_getnumof_moves(int pos, t_list *head)
{
    int     movs;

    if (pos <= ft_stack_len(head)/2)
        movs = pos - 1;
    else
        movs = ft_stack_len(head) - pos + 1;
    return (movs);
}

void    ft_sort_below_hund(t_list **head, t_list **head2, int *arr, int no_of_chunks, int len)
{
    int     start;
    int     end;
    int     i;
    int     x;
    int     y;

    i = 0;
    while (i < no_of_chunks)
    {
        start = i * (len/no_of_chunks);
        end = (i + 1) * (len/no_of_chunks) - 1;
        while (start <= end)
        {
            x = ft_get_position(*head, arr[start]);
            y = ft_get_position(*head, arr[end]);
            if (ft_getnumof_moves(x, *head) <= ft_getnumof_moves(y, *head))
            {
                if (x <= ft_stack_len(*head)/2 || ft_stack_len(*head)/2 == 0)
                    ft_below_half(head, head2, x);
                else
                    ft_above_half(head, head2, x);
                start++;
            }
            else
            {
                if (y <= ft_stack_len(*head)/2)
                    ft_below_half(head, head2, y);
                else
                    ft_above_half(head, head2, y);
                end--;
            }
        }
        i++;
    }
}

int     main(int argc, char **argv)
{
    int a[argc - 1];
    t_list  *head;
    t_list *head2;
    
    head = NULL;
    head2 = NULL;

    head = ft_create_a(head, argv, argc);
    ft_sorted_array(argv, argc, a);
    int len = ft_stack_len(head);
    ft_sort_below_hund(&head, &head2, a, 2, len);

   
    /*printf("ARRAY SORTED ");
    int i = 0;
    while (i < ft_stack_len(head))
    {
        printf("%d ", a[i]);
        i++;
    }*/

    t_list *t = head;
    printf("\nSTACK A ");
    while (t != NULL)
    {
        printf("%d ", t->content);
        t = t->next;
    }

    t_list *tt = head2;
    printf("\n\nSTACK B ");
    while (tt != NULL)
    {
        printf("%d ", tt->content);
        tt = tt->next;
    }
    return (0);
}