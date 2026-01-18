// #include <stdio.h>
#include "ft_utils.h"

void	sort_three_nodes(t_list **stack_a)
{
	int n1 = (*stack_a)->index;
	int n2 = (*stack_a)->next->index;
	int n3 = (*stack_a)->next->next->index;

	if((n1 < n2) && (n1 > n3) && (n2 > n3))
		rra(stack_a, 1);
	else if((n1 > n2) && (n1 > n3) && (n2 < n3))
		ra(stack_a, 1);
	else if((n1 < n2) && (n1 < n3) && (n2 > n3))
	{
		rra(stack_a, 1);
		sa((*stack_a), 1);
	}
	else if((n1 > n2) && (n1 < n3) && (n2 < n3))
		sa((*stack_a), 1);
	else if((n1 > n2) && (n1 > n3) && (n2 > n3))
	{
		sa((*stack_a), 1);
		rra(stack_a, 1);
	}
}

void	sort_four_nodes(t_list **stack_a, t_list **stack_b)
{
	int min = (*stack_a)->index;
	t_list *min_node = (*stack_a);
	t_list *tmp = (*stack_a)->next;

	while (tmp)
	{
		if (min > tmp->index)
		{
			min = tmp->index;
			min_node = tmp;
		}
		tmp = tmp->next;
	}
	//i have to delete min node from stack a
	ft_lstadd_back(stack_b, min_node);

}

// int main()
// {
// 	t_list *stack_a = NULL;
// 	t_list *stack_b = NULL;
// 	t_list *tmp;

// 	ft_lstadd_back(&stack_a, ft_lstnew(3));
// 	ft_lstadd_back(&stack_a, ft_lstnew(5));
// 	ft_lstadd_back(&stack_a, ft_lstnew(4));
// 	// ft_lstadd_back(&stack_a, ft_lstnew(0));
// 	// ft_lstadd_back(&stack_a, ft_lstnew(3));

// 	tmp = stack_a;
// 	printf("stack_a before\n");
// 	while(tmp)
// 	{
// 		// printf(" content: %d\n index: %d\n", tmp->content, tmp->index);
// 		printf("%d\n", tmp->content);
// 		tmp = tmp->next;
// 	}

// 	if(ft_lstsize(stack_a) == 3)
// 		sort_three_nodes(&stack_a, &stack_b);


		 
// 	tmp = stack_a;
// 	printf("stack_a after\n");
// 		while(tmp)
// 	{
// 		printf("%d\n", tmp->content);
// 		tmp = tmp->next;
// 	}

	
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

	

// 	// sa(&stack_b, 1);
// 	// tmp1 = stack_b;
// 	// printf("stack_b after\n");
// 	// 	while(tmp1)
// 	// {
// 	// 	printf("%d\n", tmp1->content);
// 	// 	tmp1 = tmp1->next;
// 	// }
// }