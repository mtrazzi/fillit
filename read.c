/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 14:30:21 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/04 16:07:42 by mtrazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char    *ft_read(char *av1)
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
