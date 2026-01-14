/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:56:09 by yhamdaou          #+#    #+#             */
/*   Updated: 2026/01/14 16:03:46 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_utils.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ft_isvalid(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if ((ft_isdigit(str[i]) || str[i] == ' ') || (( str[i] == '+' || str[i] == '-') && ft_isdigit(str[i + 1])) )
			i++;
		else
			return(0);
	}
	return(1);
}
// int main(int ac, char *av[])
// {
// 	int i;
// 	int j;
// 	int content;
// 	char **splited = NULL;
// 	t_list *list = NULL;

// 	i = 1;
// 	while (av[i])
// 	{
// 		// printf("%d\n",ft_isvalid(av[1]));
// 		// printf("%s", av[1]);
// 		if(ft_isvalid(av[i]) == 1)
// 		{
// 			//ajout au linked list
// 			splited = ft_split(av[i], ' ');
// 			j = 0;
// 			while(splited[j])
// 			{
// 				// printf("%s\n", p[j]);
// 				content = ft_atoi(splited[j]);
// 				if (content > -2147483648 && content < 2147483647 && !ft_exist(list, content))
// 				// printf("--%d--\n", content);
// 				{
// 					ft_lstadd_back(&list, ft_lstnew(content));
// 					j++;
// 				}
// 				else
// 				{
// 					ft_lstclear(&list);
// 					printf("Error!");
// 					break ;           
// 				}
// 			}
// 		i++;
// 		}
// 		else
// 		{
// 		// free tout and return error
// 			ft_lstclear(&list);
// 			printf("Error!");
// 			break ;
// 		}
		
// 	}
// 	while(list)
// 	{
// 		printf("%d\n", list->content);
// 		list = list->next;
// 	}
// }