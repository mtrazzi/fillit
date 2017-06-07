/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tetriminos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:19:58 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/07 11:04:36 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_str_square(char *str)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (str[5 * i + j] != '.' && str[5 * i + j] != '#')
				return (0);
			if (str[5 * i + j] == '#')
				count++;
			j++;
		}
		if (str[5 * i + j] != '\n')
			return (0);
		i++;
	}
	if (count != 4)
		return (0);
	return (1);
}

int		is_intput_well_formated(char *str)
{
	size_t	nb;
	size_t	i;

	i = 0;
	nb = (ft_strlen(str) + 1) / 21;
	if (nb * 21 - 1 != ft_strlen(str))
		return (0);
	while (i < nb - 1)
	{
		if (!is_str_square(str + 21 * i) || str[20 + 21 * i] != '\n')
			return (0);
		i++;
	}
	if (!is_str_square(str + 21 * i))
		return (0);
	return (1);
}

int		is_tetri(char *str)
{
	size_t	i;
	char	*tet_lst;
	char	*code;

	i = 0;
	tet_lst = "0111\n0555\n0141\n0151\n1414\n1131\n0515\n0114\n0514\n1411\n\
1415\n0113\n0551\n2311\n0155\n0115\n0145\n0511\n1541";
	code = tetris_type(str);
	while (i < (ft_strlen(tet_lst) + 1) / 5)
	{
		if (!ft_strncmp(tet_lst + 5 * i + 1, code + 1, 3))
			return (1);
		i++;
	}
	return (0);
}

int		ft_corr_input(char *input)
{
	size_t	i;

	i = 0;
	if (!is_intput_well_formated(input))
		return (0);
	while (i < (ft_strlen(input) + 1) / 21)
	{
		if (!is_tetri(input + 21 * i))
			return (0);
		i++;
	}
	return (1);
}
