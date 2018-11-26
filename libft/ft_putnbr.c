/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:08:01 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 10:57:08 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int nbu;

	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	nbu = n;
	if (nbu >= 10)
	{
		ft_putnbr(nbu / 10);
		ft_putnbr(nbu % 10);
	}
	if (nbu < 10)
		ft_putchar(nbu + '0');
}
