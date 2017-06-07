/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:51:48 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/07 10:49:24 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*tetris_type(char *pointer)
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
		if (pointer[i] == '#')
		{
			str[j] = '0' + i - p;
			p = i;
			j++;
		}
		i++;
	}
	return (str);
}
