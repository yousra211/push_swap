/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhamdaou <yhamdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:23:26 by yhamdaou          #+#    #+#             */
/*   Updated: 2026/01/13 20:57:28 by yhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

static int	ft_strslen(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_strrlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**free_fail(char **p, int j)
{
	while (j >= 0)
	{
		free(p[j]);
		p[j] = NULL;
		j--;
	}
	free(p);
	p = NULL;
	return (NULL);
}

static char	**ft_fill(char **p, char const *s, char c, int size)
{
	int	i;
	int	len;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] && j < size)
	{
		while (s[i] && s[i] == c)
			i++;
		len = ft_strrlen(&s[i], c);
		p[j] = malloc ((len + 1) * sizeof(char));
		if (!p[j])
			return (free_fail(p, j));
		k = 0;
		while (s[i] && s[i] != c)
			p[j][k++] = s[i++];
		p[j][k] = '\0';
		j++;
	}
	p[j] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**p;

	if (!s)
		return (NULL);
	size = ft_strslen(s, c);
	p = malloc((size + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	p = ft_fill(p, s, c, size);
	return (p);
}
