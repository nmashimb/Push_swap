/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
static void		checker(t_list	**hd1, mvs_list *mhead)
{
	t_list	*head2;
	t_list	*head1;
	head2 = NULL;
	head1 = *hd1;

	if (mhead != NULL && ft_is_moves_valid(mhead))
	{
		ft_putstr("Error\n");
		return ;
	}
	if (ft_sort_check(head1) == 0 && mhead != NULL)
	{
		ft_sorting_game(&head1, &head2, mhead);
		if ((ft_sort_check(head1)) == 1)
			ft_putstr("OK\n");
		else if ((ft_sort_check(head1)) == 0) 
			ft_putstr("KO\n");
	}
	else if ((ft_sort_check(head1)) == 1)
		ft_putstr("OK\n");
	*hd1 = head1;
	while (*hd1 != NULL)
		ft_pop(hd1);
}

int		main(int argc, char **argv)
{
	t_list		*head;
	mvs_list	*mhead;
	mvs_list	*mtail;
	char		*line;
	int			snums[500];

	head = NULL;
	mhead = NULL;
	mtail = NULL;
	line = NULL;
	if (argc == 2){
		ft_fill_stack_and_update_argc(&head, argv, &argc, snums);
		free(argv);
		if (head == NULL)
			return (0);
	}
	else{
		head = ft_create_a(head, argv, argc);
		if (head == NULL)
		return (0);
	};
	while (get_next_line(0, &line) == 1)
		ft_add_move(&mhead, &mtail, line);
	checker(&head, mhead);
	free(mhead); // no seg
	ft_strdel(&line);
	return (0);
}
