/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendle_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:07:15 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 11:59:01 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *c, int fd)
{
	int i;

	i = -1;
	while (c[++i] != '\0')
		ft_putchar_fd(c[i], fd);
	ft_putchar_fd('\n', fd);
}
