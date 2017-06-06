#include "fillit.h"

int		ft_count(char *inp, char *grid, int pos, int count)
{
	int size;
	char *tet;

	if (*inp == '\0')
		return (count + 1);
	if (grid[pos] == '\0')
		return (count);
	if (grid[pos] != '.')
		return (ft_count(inp, grid, pos + 1, count));
	size = ft_line_len(grid);
	tet = convert_size(tetris_type(inp), size);
	if (ft_isroom(grid, tet, pos))
	{
		grid = ft_insert(grid, tet, pos, '#');
		count = ft_count(inp + 21, grid, pos + 1, count);
	}
	ft_insert(grid, tet, pos, '.');
	return (count);
}
