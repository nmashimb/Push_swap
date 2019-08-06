/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/06 15:02:24 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static	void	add_move(mvs_list **mhead, mvs_list **mtl, char *move)
{
	mvs_list	*p;
	mvs_list	*mtail;

	mtail = *mtl;
	p = (mvs_list *)malloc(sizeof(mvs_list));
	p->content = move;
	if (*mhead == NULL)
	{
		p->next = NULL;
		*mhead = p;
		mtail = p;
	}
	else
	{
		mtail->next = p;
		mtail = p;
		p->next = NULL;
	}
	*mtl = mtail;
	p = NULL;
}

/*static void		checker(t_list	*head, char	**arr_moves)
{
	sort_game(head, arr_moves);
}*/

/*static void		arr_moves(char	***line)
{
	int	i;

	i = 0;
	while ((get_next_line(0, *line)) == 1)
	{
		printf("lines %s", *line[i]);
		i++;
	}
}*/

int		main(int argc, char **argv)
{
	t_list		*head;
	mvs_list	*mhead;
	mvs_list	*mtail;

	t_list	*t;
	char	*line;
	head = NULL;
	mhead = NULL;
	mtail = NULL;
	t = NULL;
	if (argc == 2)
		return (1);
	head = ft_create_a(head, argv, argc);
	//if (head != NULL)
		//checker(head);
	
	while (get_next_line(0, &line) == 1)
	{
		add_move(&mhead, &mtail, line);
	}
	mvs_list *x;
	x = mhead;
	while (x != NULL)
	{
		printf("%s\n", x->content);
		x = x->next;
	}

	t = head;
	while (t != NULL)
	{
		printf("%d\n", t->content);
		t = t->next;
	}
	return (0);
}
