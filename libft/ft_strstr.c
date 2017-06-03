/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:50:26 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/19 18:41:02 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;

	i = 0;
	if (!little[i])
		return ((char*)big);
	while (*big)
	{
		while (big[i] == little[i] && big[i] && little[i])
		{
			if (little[i + 1] == '\0')
				return ((char*)big);
			i++;
		}
		i = 0;
		big++;
	}
	return (0);
}
