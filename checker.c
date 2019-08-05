/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/05 10:44:20 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/*static void		checker(t_list	*head, char	**arr_moves)
{
	sort_game(head, arr_moves);
}*/

static void		arr_moves(char	***line)
{
	int	i;

	i = 0;
	while ((get_next_line(0, *line)) == 1)
	{
		printf("lines %s", *line[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	t_list	*head;

	if (argc == 2)
		return (1);
	if (head = ft_create_a(head, argv, argc))
		//checker(head);
	t_list *t = head;
	while (t != NULL)
	{
		printf("%d\n", t->content);
		t = t->next;
	}
	return (0);
}
