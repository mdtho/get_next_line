/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:30:57 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 19:37:29 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*dst2;
	unsigned char			*src2;
	size_t					i;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (dst2[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
		i++;
	}
	return (NULL);
}
