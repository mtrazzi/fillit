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
	printf("nb vaut : %lu\n", nb);
	if (nb * 21 - 1 != ft_strlen(str))
		return (0);
	printf("checkpoint 0\n");
	while (i < nb - 1)
	{
		if (!is_str_square(str + 21 * i) || str[20 + 21 * i] != '\n')
			return (0);
		printf("checkpoint %lu\n", i + 1);
		i++;
	}
	if (!is_str_square(str + 21 * i))
		return (0);
	return (1);
}

int		is_tetri(char *str)
{
	int i;
	char *tet_lst;

	i = 0;
	tet_lst = ft_ret_tetris_fr_file("all_tetriminos");
	while (i < 15)
	{
		if (diff_tetri(str, tet_lst + 5 * i, 4, '#'))
			return (1);
		i++;
	}
	return (0);
}

int		main()
{
	printf("%d", is_tetri("#...\n#...\n#...\n#...\n"));
	return (0);
}
