/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:50:22 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 14:56:04 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	j = 0;
	if (size > 0 && dst[i] == '\0')
	{
		while (src[j] != '\0' && i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	k = 0;
	while (src[j++] != '\0')
		k++;
	return (i + k);
}
