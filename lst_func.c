/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:17:07 by nmashimb          #+#    #+#             */
/*   Updated: 2019/07/20 17:49:30 by nmashimb         ###   ########.fr       */
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
	p = NULL;
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

//moves
static	void	ft_sa(t_list **hd)
{
	t_list	*p;
	t_list	*head;

	head = *hd;
	if (head == NULL)
	{
		printf("empty list!!");
		return ;
	}
	p = head -> next;
	head -> next = p -> next;
	p -> next = head;
	*hd = p;
	p = NULL;
	head = NULL;
}

//recheck function
static void		ft_ra(t_list **hd)
{
	t_list	*head;
	t_list	*p;
	//t_list	*p2;

	head = *hd;
	if (head == NULL)
	{
		printf("list_empty!\n");
	}
	p = head -> next -> next;
	p -> next = head -> next;
	head -> next -> next = head;
	p -> next -> next -> next = NULL;
	*hd = p;
	p = NULL;
	head = NULL;
	printf("%p\n\n", head);
}

static void		ft_rra(t_list **hd)
{
	t_list	*head;
	t_list	*p;

	head = *hd;
	if (head == NULL)
	{
		printf("list empty!\n");
		return ;
	}
	p = head -> next;
	p -> next -> next = head;
	head = p -> next;
	p -> next = NULL;
	*hd = head;
	head = NULL;
	p = NULL;
}

int		main()
{
	t_list	*head = NULL;
	t_list	*t;

	ft_push(&head, 3);
	ft_push(&head, 1);
	ft_push(&head, 2); 
	ft_sa(&head);
	//ft_ra(&head);
	//ft_rra(&head);
	
	//t_list *x = ft_pop(&head);
	//x = ft_pop(&head);
	//int x = ft_peek(head);

	t = head;
	while (t != NULL)
	{
		printf("%d\n", t -> content);
		t = t -> next;
	}
	return (0);
}
