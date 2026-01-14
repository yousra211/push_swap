/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:49:49 by yhamdaou          #+#    #+#             */
/*   Updated: 2026/01/14 11:46:31 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include<stdio.h>

void sa(t_list *stack_a, int flag)
{
	int	tmp;
	if(stack_a && (stack_a->next))
	{
		tmp = stack_a->content;
		stack_a->content = stack_a->next->content;
		stack_a->next->content = tmp;
		if (flag)
			write(1, "sa\n", 3);
	}
}

void sb(t_list *stack_b, int flag)
{
	int	tmp;
	if(stack_b && (stack_b->next))
	{
		tmp = stack_b->content;
		stack_b->content = stack_b->next->content;
		stack_b->next->content = tmp;
		if (flag)
			write(1, "sb\n", 3);
	}
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	write(1, "ss\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	// t_list *tmp = *stack_b;
	ft_lstadd_front(stack_a, ft_lstnew((*stack_b)->content));
	*stack_b = (*stack_b)->next;
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	ft_lstadd_front(stack_b, ft_lstnew((*stack_a)->content));
	*stack_a = (*stack_a)->next;
	write(1, "pb\n", 3);
}

void	ra(t_list **stack_a, int flag)
{
	t_list *tmp;

	tmp = *stack_a;
	ft_lstadd_back(stack_a, ft_lstnew((*stack_a)->content));
	*stack_a = (*stack_a)->next;
	free(tmp);
	if(flag)
		write(1, "ra\n", 3);
}

void	rb(t_list **stack_b, int flag)
{
	t_list *tmp;

	tmp = *stack_b;
	ft_lstadd_back(stack_b, ft_lstnew((*stack_b)->content));
	*stack_b = (*stack_b)->next;
	free(tmp);
	if(flag)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}

void	rra(t_list **stack_a, int flag)
{
	t_list *blast;
	t_list *last;
	
	blast = *stack_a;
	last = (*stack_a)->next;
	while(last->next)
	{
		blast = blast->next;
		last = last->next;
	}
	ft_lstadd_front(stack_a, ft_lstnew(last->content));
	blast->next = NULL;
	free(last);
	if(flag)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int flag)
{
	t_list *blast;
	t_list *last;
	
	blast = *stack_b;
	last = (*stack_b)->next;
	while(last->next)
	{
		blast = blast->next;
		last = last->next;
	}
	ft_lstadd_front(stack_b, ft_lstnew(last->content));
	blast->next = NULL;
	free(last);
	if(flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 1);
	rrb(stack_b, 1);
	write(1, "rrr\n", 4);
}

// int main()
// {
// 	t_list *stack_a = NULL;
// 	t_list *tmp;
// 	ft_lstadd_back(&stack_a, ft_lstnew(3));
// 	ft_lstadd_back(&stack_a, ft_lstnew(4));
// 	ft_lstadd_back(&stack_a, ft_lstnew(5));
// 	ft_lstadd_back(&stack_a, ft_lstnew(6));
// 	tmp = stack_a;
// 	printf("stack_a before\n");
// 	while(tmp)
// 	{
// 		printf("%d\n", tmp->content);
// 		tmp = tmp->next;
// 	}


	
// 	// t_list *stack_b = NULL;
// 	// t_list *tmp1;
// 	// ft_lstadd_back(&stack_b, ft_lstnew(13));
// 	// ft_lstadd_back(&stack_b, ft_lstnew(14));
// 	// ft_lstadd_back(&stack_b, ft_lstnew(15));
// 	//  tmp1 = stack_b;
// 	//  printf("stack_b before\n");
// 	// while(tmp1)
// 	// {
// 	// 	printf("%d\n", tmp1->content);
// 	// 	tmp1 = tmp1->next;
// 	// }

	
// 	rra(&stack_a, 1);
// 	tmp = stack_a;
// 	printf("stack_a after\n");
// 		while(tmp)
// 	{
// 		printf("%d\n", tmp->content);
// 		tmp = tmp->next;
// 	}

// 	// sa(&stack_b, 1);
// 	// tmp1 = stack_b;
// 	// printf("stack_b after\n");
// 	// 	while(tmp1)
// 	// {
// 	// 	printf("%d\n", tmp1->content);
// 	// 	tmp1 = tmp1->next;
// 	// }
// }