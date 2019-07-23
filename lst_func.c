/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/23 16:14:58 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdio.h>

//lst func's
static void	ft_push(t_list **head, int nbr)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	p -> content = nbr;
	if (*head == NULL)
	{
		p -> next = NULL;
		*head = p;
	}
	else
	{
		p -> next = *head;
		*head = p;
	}
	p = NULL;
}

static t_list		*ft_pop(t_list **head)
{
	t_list	*p;
	
	if (*head == NULL)
	{
		printf("nothing in list!!\n");
		return (NULL);
	}
	else
	{
		p = *head;
		*head = p -> next;
		p -> next = NULL;
	}
	return (p);
}

static int	ft_peek(t_list *head)
{
	if (head == NULL)
	{
		printf("list empty\n");
		return (-1);
	}
	return(head -> content);
}

//movesssssssssssssssssssssssssssssssss
static void		ft_sa(t_list **hd) //sb
{
	t_list	*head;
	t_list	*p;

	head = *hd;
	if (head == NULL || head -> next == NULL)
	{	
		ft_putstr("list empty or cannot be swapped!!!\n");
		return ;
	}	
	p = head -> next;
	head -> next = p -> next;
	p -> next = head;
	head = p;	
	*hd = head;
	p = NULL;
	head = NULL;
}

//recheck function
static void		ft_ra(t_list **hd) //sb //could be better?
{
	t_list	*head;
	t_list	*p1;
	t_list	*p2;

	head = *hd;
	if (head == NULL || head -> next == NULL) // one node or none!!
	{
		ft_putstr("list empty or cannot be swapped!!!\n");
		return ;
	}
	else if (head -> next -> next == NULL)
	{
		p1 = head -> next;
		p1 -> next = head;
		head -> next = NULL;
		head = p1;
	}
	else
	{
		p2 = *hd;
		p1 = *hd;
		while (p2 -> next -> next != NULL)
			p2 = p2 -> next;
		head = p1 -> next;
		p1 -> next = NULL;
		p2 -> next -> next = p1;
	}
	*hd = head;
	p1 = NULL;
	p2 = NULL;
	head = NULL;	
}

static void		ft_rra(t_list **hd) //rrb
{
	t_list	*head;
	t_list	*p;

	head = *hd;
	p = *hd;
	if (head == NULL || head -> next == NULL)
	{
		ft_putstr("list empty or list cannot swap!!!\n");
		return ;
	}
	else
	{
		while (p -> next -> next != NULL)
			p = p -> next;
		//printf("%d\n", p2 -> content);
		p -> next -> next = head;
		head = p -> next;
		p -> next = NULL;
	}
	*hd = head;
	p = NULL;
}

static	void	ft_pa(t_list **hd1, t_list **hd2)
{
	t_list	*p = NULL;
	t_list	*head;

	if (*hd2 == NULL)
	{
		ft_putstr("stack b is empty!!!\n");
		return ;
	}
	ft_push(hd1, (ft_pop(hd2) -> content));
}
//ss(sa and sb at the same time)
//rrr(rra and rrb at the same time)

int		main()
{
	t_list	*head1 = NULL;
	t_list	*head2 = NULL;
	t_list	*t;
	t_list	*s;

	ft_push(&head1, 3);
	ft_push(&head1, 1);
	ft_push(&head1, 2);
	//ft_push(&head1, 4);
	//ft_push(&head1, 5);
	
	ft_push(&head2, 9);
	ft_push(&head2, 7);
	ft_push(&head2, 8);
	//ft_push(&head2, 6);

	//ft_sa(&head);
	//ft_ra(&head);
	//ft_rra(&head);

	//ft_pa(&head1, &head2);
	//ft_pa(&head1, &head2);
	//ft_pa(&head1, &head2);
	//ft_pa(&head1, &head2);
	//ft_pa(&head1, &head2);

	//t_list *x = ft_pop(&head);
	//t_list	*x = ft_pop(&head2);
	//int x = ft_peek(head);

	printf("stack A\n");
	t = head1;
	while (t != NULL)
	{
		printf("%d\n", t -> content);
		t = t -> next;
	}
	printf("stack B\n");
	s = head2;
	while (s != NULL)
	{
		printf("%d\n", s -> content);
		s = s -> next;
	}
	return (0);
}
