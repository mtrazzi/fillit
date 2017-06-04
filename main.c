#include "fillit.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*buff;
	if (ac != 2)
		ft_putendl_fd("error", 2);
	buff = read(av[1]);
	printf("%s\n", buff);
	ft_putendl(buff);
	return (0);
}
