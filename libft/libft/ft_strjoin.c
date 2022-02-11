/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolai <fnicolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:04:12 by fnicolai          #+#    #+#             */
/*   Updated: 2022/02/11 16:03:08 by fnicolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	c;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	c = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[c])
	{
		str[i] = s2[c];
		i++;
		c++;
	}
	str[i] = '\0';
	return (str);
}
