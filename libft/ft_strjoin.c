/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:12:51 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 15:19:55 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *fresh;
	char *fresher;

	if (s2 == NULL && s1 == NULL)
		return (ft_strnew(0));
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (fresh == NULL)
		return (NULL);
	fresher = fresh;
	while (*s1 != '\0')
		*fresher++ = *s1++;
	while (*s2 != '\0')
		*fresher++ = *s2++;
	*fresher = '\0';
	return (fresh);
}
