/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:47:55 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 15:13:28 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*s2;

	s2 = (char*)s;
	len = ft_strlen(s2);
	while (len >= 0)
	{
		if (s2[len] == c)
			return (s2 + len);
		len--;
	}
	return (0);
}
