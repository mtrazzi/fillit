#include "fillit.h"

int		ft_line_len(char *grid)
{
	int i;

	i = 0;
	while (grid[i] != '\n')
		i++;
	return (i);
}

char	*ft_empty_grid(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_strnew(size * (size + 1));
	str = memset(str, '.', size * (size + 1));
	while (i < size)
	{
		str[size + (size + 1) * i] = '\n';
		i++;
	}
	return (str);
}

char	*convert_size(char *tetri, int size)
{
	int i;
	int pos;
	int x;

	i = 1;
	pos = tetri[0] - '0';
	while (i < 4)
	{
		x = tetri[i] - '0';
		if (((pos + x) % (size + 1)) <= (pos % (size + 1)))
			tetri[i] += 1;
		pos += x;
		i++;
	}
	return (tetri);
}
