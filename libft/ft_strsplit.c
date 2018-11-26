/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:05:33 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/15 14:33:52 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_assign_tab(char **tab, char const *s, char c)
{
	int		i;
	int		j;
	int		m;

	i = 0;
	j = -1;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			while (s[i] == c)
				i++;
		else
		{
			m = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (!(tab[++j] = ft_strsub(s, m, i - m)))
				return (NULL);
			tab[j][i - m] = '\0';
		}
	}
	tab[++j] = 0;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (!s || !(tab = malloc(sizeof(char*) * (ft_countwords(s, c) + 1))))
		return (NULL);
	tab = ft_assign_tab(tab, s, c);
	return (tab);
}
