/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolai <fnicolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:21:46 by fnicolai          #+#    #+#             */
/*   Updated: 2022/02/11 13:46:16 by fnicolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	howmanyparts(char const *s, char c)
{
	char	*str;
	int		parts;

	parts = 0;
	str = (char *)s;
	while (*str)
	{
		while (*str == c)
			str++;
		if (!*str)
			break ;
		parts++;
		while (*str != c && *str)
			str++;
	}
	return (parts);
}

char	**parting(char *s, char c, int parts, char **split)
{
	int		a;
	int		i;

	a = 0;
	i = 0;
	while (*s == c)
		s++;
	while (a < parts)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			i++;
			s++;
		}
		split[a] = (char *)malloc(sizeof(char) * (i + 1));
		split[a][i] = 0;
		a++;
	}
	split[a] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		parts;
	char	**split;
	int		i;
	int		a;

	if (!s)
		return (NULL);
	parts = howmanyparts(s, c);
	split = (char **)malloc(sizeof(char *) * (parts + 1));
	if (!split)
		return (0);
	split = parting((char *)s, c, parts, split);
	a = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
			split[a][i++] = *s++;
		a++;
	}
	return (split);
}
