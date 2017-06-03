/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 15:09:38 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/02 16:28:07 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s_len;
	size_t	i;
	size_t	j;
	char	*s_concat;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	s_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(s_concat = (char*)malloc(sizeof(*s_concat) * (s_len + 1))))
		return (NULL);
	while (s1[i])
	{
		s_concat[i] = s1[i];
		i++;
	}
	while (s2[j])
		s_concat[i++] = s2[j++];
	s_concat[i] = '\0';
	return (s_concat);
}
