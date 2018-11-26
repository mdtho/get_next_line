/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:13:26 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 18:56:49 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char *string;

	if (!(string = (char*)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(string, "-2147483648"));
	if (n < 0)
	{
		string[0] = '-';
		string[1] = '\0';
		string = ft_strjoin(string, ft_itoa(-n));
	}
	else if (n >= 10)
		string = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		string[0] = n + '0';
		string[1] = '\0';
	}
	return (string);
}
