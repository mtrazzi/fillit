/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:38:28 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/17 08:35:16 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*src_str;
	char		*dst_str;

	src_str = src;
	dst_str = dst;
	while (n > 0)
	{
		*dst_str++ = *src_str++;
		n--;
	}
	return (dst);
}
