/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:10:47 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 15:21:27 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int x;

	i = 0;
	if (needle[0] == '\0' && haystack[0])
		return ((char *)haystack);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		x = len + 1;
		if (needle[j] == haystack[i])
		{
			while (haystack[i + j] == needle[j] &&
					--x > 0 && haystack[i + j] && needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
		len--;
	}
	return (NULL);
}
