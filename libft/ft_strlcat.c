/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 19:12:11 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/19 15:52:37 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	tmp;

	i = 0;
	j = 0;
	while (i < size && dst[i])
		i++;
	tmp = i;
	while (size && i < size - 1 && src[j])
		dst[i++] = src[j++];
	if (i < size)
		dst[i] = '\0';
	return (tmp + ft_strlen(src));
}
