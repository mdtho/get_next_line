/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:16:47 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/14 15:18:21 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *list;
	t_list *tmp;

	list = *alst;
	if (del && list)
	{
		while (list)
		{
			tmp = list->next;
			del(list->content, list->content_size);
			free(list);
			list = tmp;
		}
		*alst = NULL;
	}
}
