/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolai <fnicolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:43:34 by fnicolai          #+#    #+#             */
/*   Updated: 2022/02/09 19:25:51 by fnicolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char	*subs;
	size_t	i;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) > len)
		size = len;
	else
		size = ft_strlen(s);
	subs = (char *)malloc(sizeof(char) * (size + 1));
	if (!subs)
		return (NULL);
	i = -1;
	size = 0;
	while (s[++i])
	{
		if (size < len && i >= start)
		{
			subs[size] = s[i];
			size++;
		}
	}
	subs[size] = '\0';
	return (subs);
}
