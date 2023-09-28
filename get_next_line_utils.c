#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(to_find);
	if (!to_find)
		return (str);
	while (str[i] && j != len)
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (j == len)
		return (str + i);
	return (0);
}
