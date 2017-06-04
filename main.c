/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:28:40 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/04 13:17:19 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h> 

char    *ft_ret_tetris_fr_file(char *av1)
{
	int     fd;
	int     ret;
	int     len;
	char    *buff;

	len = 0;
	fd = open(av1, O_RDONLY);
	buff = ft_strnew(20);
	while ((ret = read(fd, buff, 20)) > 0)
		len += ret;
	close (fd);
	buff = ft_strnew(len);
	fd = open(av1, O_RDONLY);
	ret = read(fd, buff, len);
	return (buff);
}


int		main(int ac, char **av)
{
	char	*buff;
	if (ac != 2)
		ft_putendl_fd("error", 2);
	buff = ft_ret_tetris_fr_file(av[1]);
	printf("%s\n", buff);
	return (0);
}
