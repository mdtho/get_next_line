/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:54:55 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/09 16:55:29 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dst2;
	char *src2;

	dst2 = (char*)dst;
	src2 = (char*)src;
	while (n > 0)
	{
		*dst2 = *src2;
		n--;
		dst2++;
		src2++;
	}
	return (dst);
}
