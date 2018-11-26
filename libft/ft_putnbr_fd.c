/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:15:11 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 10:57:20 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nbu;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	nbu = n;
	if (nbu >= 10)
	{
		ft_putnbr_fd(nbu / 10, fd);
		ft_putnbr_fd(nbu % 10, fd);
	}
	if (nbu < 10)
		ft_putchar_fd(nbu + '0', fd);
}
