#include <stdio.h>
#include "ft_utils.h"

int main()
{
	t_list *stack_a = NULL;
	t_list *stack_b = NULL;
	t_list *tmp;

	ft_lstadd_back(&stack_a, ft_lstnew(5));
	ft_lstadd_back(&stack_a, ft_lstnew(4));
	ft_lstadd_back(&stack_a, ft_lstnew(3));
	// ft_lstadd_back(&stack_a, ft_lstnew(6));
	tmp = stack_a;
	printf("stack_a before\n");
	while(tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}

	t_list *second_node = stack_a->next;

	if((stack_a->content < second_node->content) && (stack_a->content > second_node->next->content) 
		&& (second_node->content > second_node->next->content))
		rra(&stack_a, 1);
	else if((stack_a->content > second_node->content) && (stack_a->content > second_node->next->content) 
		&& (second_node->content < second_node->next->content))
		ra(&stack_a, 1);
	else if((stack_a->content < second_node->content) && (stack_a->content < second_node->next->content) 
		&& (second_node->content > second_node->next->content))
	{
		pb(&stack_a, &stack_b);
		ra(&stack_a, 1);
		pa(&stack_a, &stack_b);
	}
	else if((stack_a->content > second_node->content) && (stack_a->content < second_node->next->content) 
		&& (second_node->content < second_node->next->content))
		sa(stack_a, 1);
	else if((stack_a->content > second_node->content) && (stack_a->content > second_node->next->content) 
		&& (second_node->content > second_node->next->content))
	{
		sa(stack_a, 1);
		rra(&stack_a, 1);
				
	}

	tmp = stack_a;
	printf("stack_a after\n");
		while(tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}

	
	// t_list *tmp1;
	// ft_lstadd_back(&stack_b, ft_lstnew(13));
	// ft_lstadd_back(&stack_b, ft_lstnew(14));
	// ft_lstadd_back(&stack_b, ft_lstnew(15));
	//  tmp1 = stack_b;
	//  printf("stack_b before\n");
	// while(tmp1)
	// {
	// 	printf("%d\n", tmp1->content);
	// 	tmp1 = tmp1->next;
	// }

	

	// sa(&stack_b, 1);
	// tmp1 = stack_b;
	// printf("stack_b after\n");
	// 	while(tmp1)
	// {
	// 	printf("%d\n", tmp1->content);
	// 	tmp1 = tmp1->next;
	// }
}