/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tetriminos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 18:25:36 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/04 14:41:52 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		is_str_square(char *str) //test si la string est de la forme ****\n****\n****\n****\n
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (str[5 * i + j] != '.' && str[5 * i + j] != '#')
				return (0);
			j++;
		}
		if (str[5 * i + j] != '\n')
			return (0);
		i++;
	}
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
		if (!is_str_square(str + 21 * i) || str[20 * (i + 1)] != '\n')
			return (0);
		i++;
	}
	if (!is_str_square(str + 21 * i))
		return (0);
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d", is_intput_well_formated(ft_ret_tetris_fr_file(av[1])));
	return (0);
}
