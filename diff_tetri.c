#include "fillit.h"
#include <stdio.h>

int	diff_tetri(char *s, char *t, size_t n, char c) //determine s il y a le tetrimino t dans s en considerant les slashs comme les c. n = taille du carre, par exexmple 4. t est represente comme 0111 par exemple ou les 1 sont les ecarts entre les `c` et 0 la position du premier dans s
{	
	int i;
	int pos; //position in s

	i = 0;
	pos = 0;
	while (i < 4)
	{	
		printf("pos : %d\n", pos);
		pos += t[i] - '0';
		if (s[pos] != c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	printf("%d", diff_tetri(av[1], av[2], ft_strlen(av[3]), '#'));
	return (0);
}
