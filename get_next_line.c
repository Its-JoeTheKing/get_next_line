#include "get_next_line.h"

char	*get_first_line(char *file)
{
	int		i;
	char	*res;

	while (file[i] != '\n' && file[i] != '\0')
		i++;
	res = malloc(i + 2);
	i = 0;
	while (file[i] != '\n' && file[i] != '\0')
	{
		res[i] = file[i];
		i++;
	}
	res[i] = '\n';
	res[i + 1] = '\0';
	return (res);
}

char	*ft_get_next_line(char *file, char *line)
{
	char	*res;
	char	*temp;

	if (!line)
	{
		res = get_first_line(file);
		return (res);
	}
	if (!ft_strstr(file, line))
		return (0);
	temp = ft_strstr(file, line);
	res = get_first_line(temp);
	return (res);
}

char	*reading_buff(int fd)
{
	char	*buffer;
	int		sz;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	sz = read(fd, buffer, BUFFER_SIZE);
	buffer[sz + 1];
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*line;
	static char	*buffer;

	if (!line)
		buffer = reading_buff(fd);
	line = ft_get_next_line(buffer, line);
	return (line);
}
//s