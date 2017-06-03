/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 11:46:14 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/20 14:45:08 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

	i = 0;
	if (!(little[i]))
		return ((char*)big);
	while (*big && len > 0)
	{
		while (big[i] == little[i] && big[i] && little[i] && (len - i))
		{
			if (little[i + 1] == '\0')
				return ((char *)big);
			i++;
		}
		i = 0;
		big++;
		len--;
	}
	return (NULL);
}
