/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 19:37:47 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/03 10:51:33 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int		ft_count_words(char const *s, char c)
{
	int		i;
	int		word_c;

	i = 0;
	word_c = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && (s[i] != c))
			i++;
		word_c++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (word_c);
}

static char		**ft_return_tab(char const *s, char c)
{
	int			j;
	int			i;
	char		**tab_s;
	int			word_nb;
	int			word_len;

	word_nb = 0;
	i = 0;
	if (!(tab_s = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1))))
		return (NULL);
	while (s[i] && word_nb < ft_count_words(s, c))
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		word_len = ft_word_len(s + i, c);
		if (!(tab_s[word_nb] = (char*)malloc(sizeof(char) * (word_len + 1))))
			return (NULL);
		while (j < word_len)
			tab_s[word_nb][j++] = s[i++];
		tab_s[word_nb][j] = '\0';
		word_nb++;
	}
	tab_s[word_nb] = NULL;
	return (tab_s);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab_s;

	if (s == NULL)
		return (NULL);
	tab_s = ft_return_tab(s, c);
	return (tab_s);
}
