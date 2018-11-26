/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:44:46 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 14:34:13 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cast1;
	unsigned char	*cast2;

	if (n == 0)
		return (0);
	cast1 = (unsigned char*)s1;
	cast2 = (unsigned char*)s2;
	while (*cast1 == *cast2 && n > 1)
	{
		cast1++;
		cast2++;
		n--;
	}
	return ((int)*cast1 - *cast2);
}
