#include "fillit.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*buff;
	int x;
	int n;

	x = 0;
	if (ac != 2)
	{	
		ft_putendl_fd("usage : fillit sample.fillit", 2);
		return (0);
	}
	if (!ft_corr_input(av[1]))
	{
		ft_putendl("error");
		return (0);
	}
	buff = ft_read(av[1]);
	n = ft_sqrt(6 * ((ft_strlen(buff) + 1) / 21));
	while (!ft_count(buff, ft_empty_grid(n), 0, 'A'))
		n++;
	ft_print(buff, ft_empty_grid(n), 0, 0, &x);
	return (0);
}
