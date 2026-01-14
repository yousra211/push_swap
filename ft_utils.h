/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:56:15 by yhamdaou          #+#    #+#             */
/*   Updated: 2026/01/14 11:44:57 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
#define FT_UTILS_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
void	ft_lstclear(t_list **lst);
int		ft_exist(t_list *list, int content);
// t_list	*ft_lstlast(t_list *lst);
void	sa(t_list *stack_a, int flag);
void	sb(t_list *stack_b, int flag);
void	ss(t_list *stack_a, t_list *stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, int flag);
void	rb(t_list **stack_b, int flag);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a, int flag);
void	rrb(t_list **stack_b, int flag);
void	rrr(t_list **stack_a, t_list **stack_b);

#endif