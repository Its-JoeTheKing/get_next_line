#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static int	i;
	char	*c;
	char	*res;
	if (i == 0)
	{
		c = malloc(BUFFER_SIZE + 1);
		if (!c)
			return (0);
		int size = read(fd, c, BUFFER_SIZE);
		if (size == 0)
		{
			free(c);
			return (0);
		}
		c[size] = '\0';
	}
	res = fta_get_next_line(c, &i);
	if (res == NULL)
		free(c);
	return res;
}

int main()
{
	int fd = open("test.txt", O_RDONLY);
	char *line;
	int i = 0;
	while ((line = get_next_line(fd)) != NULL) {
		printf("%s", line);
		free(line);
	}
}