/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:17:17 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 16:54:39 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	if (s)
	{
		if (!(fresh = ft_strnew(ft_strlen(s))))
			return (NULL);
		i = -1;
		if (s && f)
		{
			while (s[++i] != '\0')
				fresh[i] = f(i, s[i]);
		}
		return (fresh);
	}
	return (NULL);
}
