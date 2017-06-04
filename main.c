/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:28:40 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/04 15:09:23 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*buff;
	if (ac != 2)
		ft_putendl_fd("error", 2);
	buff = ft_ret_tetris_fr_file(av[1]);
	printf("%s\n", buff);
	ft_putendl(buff);
	return (0);
}
