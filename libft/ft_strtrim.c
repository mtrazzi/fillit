/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 15:27:48 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/06 13:42:33 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		end;
	int		beg;
	char	*dst;
	int		i;
	int		j;

	if (s)
	{
		i = 0;
		j = 0;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		beg = i;
		i = ft_strlen(s);
		while ((s[i - 1] == '\n' || s[i - 1] == ' ' || s[i - 1] == '\t')
				&& beg < i)
		{
			i--;
			j++;
		}
		end = ft_strlen(s) - j - beg;
		dst = ft_strsub(s, beg, end);
		return (dst);
	}
	return (0);
}
