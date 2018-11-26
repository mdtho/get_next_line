/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:12:48 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 18:26:36 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*string1;
	char	*string2;
	int		i;

	i = 0;
	string1 = (char *)s1;
	string2 = (char *)s2;
	if (s1 && s2)
	{
		if (ft_strlen(string1) != ft_strlen(string2))
			return (0);
		while (string1[i] && string2[i])
		{
			if (string1[i] != string2[i])
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
