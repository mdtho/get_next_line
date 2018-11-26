/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:20:21 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/09 16:50:25 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	if (src2 < dst2)
	{
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len > 0)
		{
			*dst2-- = *src2--;
			len--;
		}
	}
	while (len > 0)
	{
		*dst2++ = *src2++;
		len--;
	}
	return (dst);
}
