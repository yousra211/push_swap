/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:30:38 by yhamdaou          #+#    #+#             */
/*   Updated: 2026/01/18 18:41:55 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	define_range(t_list *stack_a)
{
	int	size;
		
	size = ft_lstsize(stack_a);
	if (size <= 10)
		return (3);
	else if (size <= 50)
		return (10);
	else if (size <= 100)
		return (20);
	else
		return (60);
}

void	clear_a(t_list *stack_a, t_list *stack_b)
{
	int	min;
	int	max;
	
	min = 0;
	max = define_range(stack_a) - 1;
	while (stack_a)
	{	
		if (stack_a->index < min)
		{
			pb(&stack_a, &stack_b);
			rb(&stack_b, 1);
		}
		else if (stack_a->index > max)
		stack_a = stack_a->next;
	}
}