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
	//printf("nb vaut : %lu\n", nb);
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
	size_t	i;
	char	*tet_lst;
	char	*code;
	char	*test;

	i = 0;
	tet_lst = ft_read("all_tet");
	code = tetris_type(str, '#');
	printf("code : %s\n", code);
	while (i < (ft_strlen(tet_lst) + 1) / 21)
	{
		test = tetris_type(tet_lst + 21 * i, '#');
		write(1, "test is : ", 10);
		write(1, test + 1, 3);
		write(1, "\n", 1);
		if (!ft_strncmp(test + 1, code + 1, 3))
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
