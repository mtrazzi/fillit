#include "fillit.h"
#include <stdio.h>

char	*tetris_type(char *pointer, char c)
{
	int		i;
	int		j;
	int		p;
	char	*str;

	i = 0;
	j = 0;
	p = 0;
	if ((str = ft_strnew(4)) == NULL)
		return (NULL);
	while (j != 4 && pointer[i])
	{
		if (c == pointer[i])
		{
			str[j] = '0' + i - p;
			p = i;
			j++;
		}
		i++;
	}
	return (str);
}
