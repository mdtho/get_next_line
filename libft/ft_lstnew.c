/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:11:34 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 15:19:13 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *fresh;

	if (!(fresh = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(fresh->content = (void*)content))
	{
		fresh->content = NULL;
		fresh->content_size = 0;
	}
	else
	{
		if (!(fresh->content = malloc(content_size)))
			return (0);
		ft_memmove(fresh->content, content, content_size);
		fresh->content_size = content_size;
	}
	fresh->next = NULL;
	return (fresh);
}
