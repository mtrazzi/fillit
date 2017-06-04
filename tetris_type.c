/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:39:44 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/04 13:16:25 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	tetris_type(char *pointer, char c)
{
	int i;
	int j;
	int p;
	int r1;

	i = 0;
	j = 0;
	while (j != 4 && pointer[i])
	{
		if (c == pointer[i])
		{
			j++;
			if (j == 2)
				r1 = (i - p);
			if (j == 3)
				r1 = r1 * 10 + i - p;
			if (j == 4)
				r1 = r1 * 10 + i - p;
			p = i;
		}
		i++;
	}
	return (r1);
}

int	main(void)
{
	char	*test;
	int		ret;

	test = "...#\n...#\n..#.\n..#.";
	ret = tetris_type(test, '#');
	printf("%d\n", ret);
	return (0);
}
