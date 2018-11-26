/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:35:37 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 18:31:26 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char		*string1;
	char		*string2;
	size_t		i;

	i = 0;
	string1 = (char *)s1;
	string2 = (char *)s2;
	if (s1 && s2)
	{
		while (string1[i] && string2[i] && i < n)
		{
			if (string1[i] != string2[i])
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
