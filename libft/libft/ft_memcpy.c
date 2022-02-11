/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolai <fnicolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:17:34 by fnicolai          #+#    #+#             */
/*   Updated: 2022/02/07 11:09:10 by fnicolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;
	size_t	k;

	k = 0;
	tdst = (char *) dst;
	tsrc = (char *) src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (k < n)
	{
		tdst[k] = tsrc[k];
		k++;
	}
	return (tdst);
}
