/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:39:44 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/03 18:21:31 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int tetris_type(char *pointer, char c)
{
	int p;
	int p1;
	int r1;
	int r2;
	int r3;
	int j;
	int i;

	i = 0;
	j = 0;
	while (j != 4 && pointer[i]) // not complete
	{
		if (c = pointer[i])
		{
			j++;
			if (j = 1)
				p1 = i;
			if (j = 2)
			{
				p = p1;
				p1 = i;
				r1 = p1 - p;
			}
			if (j = 3)
			{
				p = p1;
				p1 = i;
				r2 = p1 - p;
			}	
			if (j = 4)
			{
				p = p1;
				p1 = i;
				r3 = p1 - p;
			}
		}
		i++;
	}
		
}


