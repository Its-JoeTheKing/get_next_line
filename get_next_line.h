#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "stdlib.h"
# include "unistd.h"
# include "fcntl.h"
# include "stdio.h"
# define BUFFER_SIZE 1000

int		ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);

#endif