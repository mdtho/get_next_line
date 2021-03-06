/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 10:42:51 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/26 10:52:56 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_start(char **stack, char **line, char *p_new_line)
{
	char	*start;

	if ((*stack)[0] == '\0')
		return (0);
	if (p_new_line && !(*p_new_line = '\0'))
	{
		*line = *stack;
		start = ft_strdup(p_new_line + 1);
		*stack = start;
	}
	else
	{
		*line = ft_strdup(*stack);
		ft_memdel((void **)stack);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	char		buffer[BUFF_SIZE + 1];
	int			ret;
	static char *stack[MAXFD];
	char		*tmp;
	char		*p_new_line;

	if (fd < 0 || read(fd, buffer, 0) < 0 || !line || fd > MAXFD)
		return (-1);
	if (!stack[fd])
		stack[fd] = ft_strnew(0);
	while (!(p_new_line = ft_strchr(stack[fd], '\n')) &&
			(ret = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[ret] = '\0';
		tmp = stack[fd];
		stack[fd] = ft_strjoin(stack[fd], buffer);
		free(tmp);
	}
	return (get_start(&stack[fd], line, p_new_line));
}
