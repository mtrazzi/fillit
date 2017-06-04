/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:39:44 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/04 14:55:13 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

char	*tetris_type(char *pointer, char c)
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
		if (c == pointer[i])
		{
			str[j] = '0' + i - p;	
			p = i;
			j++;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*test;

	test = "...#\n...#\n..#.\n..#.";
	printf("%s\n", tetris_type(test, '#'));
	return (0);
}
