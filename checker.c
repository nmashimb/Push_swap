/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/07 11:01:47 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//gets stack a and stack moves.
//checks if stack is sorted
//if not sorts.
static void		checker(t_list	**head1, mvs_list *mhead)
{
	t_list	*head2;

	head2 = NULL;
	if (ft_sort_check(*head1) == 0)
	{
		ft_sorting_game(head1, &head2, mhead);
		if ((ft_sort_check(*head1)) == 1)
			ft_putstr("OK\n");
		else 
			ft_putstr("KO\n");
	}
	else 
		ft_putstr("OK\n");
}

int		main(int argc, char **argv)
{
	t_list		*head;
	mvs_list	*mhead;
	mvs_list	*mtail;
	char		*line;

	head = NULL;
	mhead = NULL;
	mtail = NULL;
	if (argc == 2)
		return (1);
	head = ft_create_a(head, argv, argc);
	if (head == NULL)
		return (0);
	while (get_next_line(0, &line) == 1)
		ft_add_move(&mhead, &mtail, line);
	
	//checker(&head, mhead);

	//will print the sorted stack a
	t_list *t = head;
	while (t != NULL)
	{
		printf("%d\n", t->content);
		t = t->next;
	}
	return (0);
}
