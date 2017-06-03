/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 14:20:15 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/02 13:41:32 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s_section;
	unsigned int	i;

	i = start;
	if (s == NULL)
		return (0);
	if (!(s_section = (char*)malloc(sizeof(char) * (len) + 1)))
		return (0);
	while (i < (unsigned int)len + start)
	{
		s_section[i - start] = s[i];
		i++;
	}
	s_section[i - start] = '\0';
	return (s_section);
}
