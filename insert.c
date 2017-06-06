#include "fillit.h"

char	*ft_insert(char *grid, char *tetri, int pos, char letter)
{
	int i;
	int position;

	i = 0;
	position = 0;
	while (i < 4)
	{
		if (i == 0)
			position += pos;
		if (i > 0)
			position += tetri[i] - '0';
		grid[position] = letter;
		i++;
	}
	return (grid);
}

int		ft_isroom(char *grid, char *tetri, int pos)
{
	int i;
	int position;

	i = 0;
	position = 0;
	while (i < 4)
	{
		if (i == 0)
			position += pos;
		else
			position += tetri[i] - '0';
		if (grid[position] != '.')
			return (0);
		i++;
	}
	return (1);
}
