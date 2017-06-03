/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tetriminos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 18:25:36 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/03 19:05:19 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include "stdio.h"

int		is_str_square(char *str) //test si la string est de la forme *****\n*****\n*****\n*****\n*****\n
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
