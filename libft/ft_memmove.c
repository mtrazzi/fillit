/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:42:46 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/18 18:35:06 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst_tmp;
	unsigned char *src_tmp;

	dst_tmp = dst;
	src_tmp = (unsigned char*)src;
	if (dst < src)
	{
		while (len--)
			*dst_tmp++ = *src_tmp++;
	}
	else
	{
		while (len--)
			dst_tmp[len] = src_tmp[len];
	}
	return (dst);
}
