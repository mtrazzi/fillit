#include "fillit.h"

int	diff_tetri(char *s, char *t, size_t n, char c)
{
	size_t	i;
	int		pos;

	i = 0;
	pos = 0;
	while (i < n)
	{
		pos += t[i] - '0';
		if (s[pos] != c)
			return (0);
		i++;
	}
	return (1);
}
