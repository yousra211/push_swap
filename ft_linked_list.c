/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:56:05 by yhamdaou          #+#    #+#             */
/*   Updated: 2026/01/14 11:40:21 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = (*lst);
	(*lst) = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst && !(*lst) && new)
	{
		(*lst) = new;
		return ;
	}
	if (lst && (*lst) && new)
	{
		tmp = (*lst);
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

t_list	*ft_lstnew(int content)
{
	t_list	*l;

	l = malloc(sizeof(t_list));
	if (!l)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}

// void	ft_lstclear(t_list **lst, void (*del)(int*))
void	ft_lstclear(t_list **lst)
{
	t_list	*p;

	if (lst && (*lst))
	{
		while ((*lst))
		{
			p = (*lst)->next;
			// del((*lst)->content);
			free((*lst));
			(*lst) = p;
		}
	}
}

int		ft_exist(t_list *list, int content)
{
	while(list)
	{
		if(list->content == content)
			return(1);
		list = list->next;
	}
	return(0);
}

// t_list	*ft_lstlast(t_list *lst)
// {
// 	if (!lst)
// 		return (NULL);
// 	while (lst->next)
// 		lst = lst->next;
// 	return (lst);
// }