/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:51:41 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/07 10:55:01 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int ac, char **av)
{
	char	*buff;
	int		x;
	int		n;

	x = 0;
	if (ac != 2)
	{
		ft_putstr_fd("usage: fillit tetriminos_input_file", 2);
		return (0);
	}
	buff = ft_read(av[1]);
	if (!ft_corr_input(buff))
	{
		ft_putendl_fd("error", 1);
		return (0);
	}
	n = 2;
	while (!ft_count(buff, ft_empty_grid(n), 0, 'A'))
		n++;
	ft_print(buff, ft_empty_grid(n), 0, &x);
	return (0);
}
