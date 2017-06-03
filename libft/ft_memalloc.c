/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:36:52 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/21 11:12:11 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*memory_alloc;
	size_t			i;

	i = 0;
	if (!(memory_alloc = (unsigned char*)malloc(sizeof(*memory_alloc) * size)))
		return (NULL);
	while (i < size)
	{
		memory_alloc[i] = 0;
		i++;
	}
	return ((void*)memory_alloc);
}
