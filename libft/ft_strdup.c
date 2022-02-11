/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolai <fnicolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:27:13 by fnicolai          #+#    #+#             */
/*   Updated: 2022/02/08 11:10:21 by fnicolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str2;
	size_t	len;

	len = ft_strlen(s1) + 1;
	str2 = malloc(sizeof(char) * len);
	if (!str2)
		return (0);
	str2 = ft_memcpy(str2, s1, len);
	return (str2);
}
