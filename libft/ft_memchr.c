/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:05:50 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 18:04:22 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;

	ss = (unsigned char*)s;
	cc = (unsigned char)c;
	while (n > 0)
	{
		if (*ss == cc)
			return (ss);
		ss++;
		n--;
	}
	return (NULL);
}
