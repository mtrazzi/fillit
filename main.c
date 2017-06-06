#include "fillit.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*buff;
	if (ac != 2)
	{
		ft_putstr_fd("usage: fillit tetriminos_input_file", 2);
		return (0);
	}
	buff = ft_read(av[1]);
	if (!ft_corr_input(buff))
	{	
		ft_putendl_fd("error", 2);
		return (0);
	}
	buff = ft_read(av[1]);
	ft_putendl(buff);
	printf("number of solutions : %d", ft_count(buff, ft_empty_grid(6), 0, 0));
	return (0);
}
