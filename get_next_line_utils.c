#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	next_line_len(int i, char *str)
{
	int	count;

	count = 0;
	while (str[i] && str[i] != '\n')
	{
		i++;
		count++;
	}
	return (count);
}

char	*fta_get_next_line(char *str, int *i)
{
	char	*res;
	int		line_ln;
	int		k;
	int		j = *i;

	k = 0;
	if (str[j] == '\0')
		return (0);
	line_ln = next_line_len(j, str);
	res = (char *)malloc(line_ln + 1);
	if (!res)
		return (0);
	while (str[j] && str[j] != '\n')
	{
		res[k++] = str[j];
		j++;
	}
	res[k] = '\0';
	*i = j+1;
	return (res);
}