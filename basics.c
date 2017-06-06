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
	int		i;
	int		pos;
	int		x;
	char	*ans;

	i = 1;
	ans = ft_strdup(tetri);
	pos = tetri[0] - '0';
	while (i < 4)
	{
		x = tetri[i] - '0';
		if (((pos + x) % 5) <= (pos % 5))
			ans[i] = tetri[i] + size - 4;
		pos += x;
		i++;
	}
	return (ans);
}
