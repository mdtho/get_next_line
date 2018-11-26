#include "get_next_line.h"

int get_start(char **stack, char **line, char *p_new_line)
{
  char *start;

  if ((*stack)[0] == '\0')
    return (0);
  if (p_new_line && !(*p_new_line = '\0')) //pointer to the next line is valid
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


int get_next_line(const int fd, char **line)
{
  char buffer[BUFF_SIZE + 1];
  int ret;
  static char *stack[MAXFD]; 
  char *tmp;
  char *p_new_line;

  if (fd < 0 || read(fd, buffer, 0) < 0 || !line || fd > MAXFD)
    return (-1);
  if (!stack[fd])
    stack[fd] = ft_strnew(0);
  while (!(p_new_line = ft_strchr(stack[fd], '\n')) &&
	 (ret = read(fd, buffer, BUFF_SIZE)))
    {
      buffer[ret] = '\0'; //buffer now contains the data up to last char read;
      tmp = stack[fd];
      stack[fd] = ft_strjoin(stack[fd], buffer); //while reading, the str[fd] string continually redefines itself as itself + buffer
      free(tmp);
    }
  return (get_start(&stack[fd], line, p_new_line)); //now your calling get_start using a pointer to the beginning of the next line; a pointer to the beginning of the next line
}
//4864
