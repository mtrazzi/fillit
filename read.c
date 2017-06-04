/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 14:30:21 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/04 15:56:46 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
	close(fd);
	return (buff);
}
