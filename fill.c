/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:51:21 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/07 10:22:32 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_count(char *inp, char *grid, int count, int step)
{
	int		size;
	char	*tet;
	int		pos;
	int		tmp;

	if (*inp == '\0')
		return (count + 1);
	size = ft_line_len(grid);
	tet = convert_size(tetris_type(inp), size);
	pos = 0;
	while (grid[pos] != '\0')
	{
		if (ft_isroom(grid, tet, pos))
		{
			grid = ft_insert(grid, tet, pos, 'A' + step);
			tmp = step;
			count = ft_count(inp + 21, grid, count, step + 1);
			if (count > 0)
				return (1);
			step = tmp;
			ft_insert(grid, tet, pos, '.');
		}
		pos++;
	}
	return (count);
}

void	ft_print_aux(char *inp, char *grid, int *found)
{
	if (*found)
		return ;
	if (*inp == '\0')
	{
		*found = 1;
		ft_putstr(grid);
		return ;
	}
}

void	ft_print(char *inp, char *grid, int step, int *found)
{
	int		size;
	char	*tet;
	int		pos;
	int		tmp;

	ft_print_aux(inp, grid, found);
	size = ft_line_len(grid);
	tet = convert_size(tetris_type(inp), size);
	pos = -1;
	while (grid[++pos] != '\0')
	{
		if (ft_isroom(grid, tet, pos))
		{
			grid = ft_insert(grid, tet, pos, 'A' + step);
			tmp = step;
			ft_print(inp + 21, grid, step + 1, found);
			if (*found)
				return ;
			step = tmp;
			ft_insert(grid, tet, pos, '.');
		}
	}
}
