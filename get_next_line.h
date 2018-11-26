#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include "libft/libft.h"

# define BUFF_SIZE 4
# define MAXFD 1024

int	get_next_line(int const fd, char **line);

#endif
