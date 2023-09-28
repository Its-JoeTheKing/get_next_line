#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "stdlib.h"
# include "unistd.h"
# include "fcntl.h"
# include "stdio.h"

int		ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*get_first_line(char *file);
char	*ft_get_next_line(char *file, char *line);
char	*reading_buff(int fd);
char	*get_next_line(int fd);

#endif