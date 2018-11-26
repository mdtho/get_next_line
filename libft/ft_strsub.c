/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:49:38 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 16:45:35 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*fresh;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	i = -1;
	while (++i < len)
		fresh[i] = s[start + i];
	return (fresh);
}
