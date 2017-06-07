/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:51:33 by mtrazzi           #+#    #+#             */
/*   Updated: 2017/06/07 12:11:42 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char *av1)
{
	int		fd;
	int		len;
	char	*buff;

	len = 0;
	if ((fd = open(av1, O_RDONLY)) == -1)
		return (NULL);
	if (!(buff = ft_strnew(550)))
		return (NULL);
	if ((read(fd, buff, 550)) == -1)
		return (NULL);
	close(fd);
	return (buff);
}
