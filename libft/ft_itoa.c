/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 10:21:52 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/06 12:18:11 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_nlen(int n, int len)
{
	if (n < -9 || n > 9)
		return (ft_nlen(n / 10, len + 1));
	return (len);
}

static char			*int_to_s(unsigned int n, int neg, int i)
{
	char			*s;

	if (!(s = (char*)malloc(sizeof(*s) * ft_nlen(n, 1) + neg + 1)))
		return (NULL);
	if (neg)
		s[0] = '-';
	if (n == 0)
		s[0] = '0';
	s[i--] = '\0';
	while (n > 0)
	{
		s[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}

char				*ft_itoa(int n)
{
	int				i;
	char			*s;
	int				n_len;
	int				neg;
	unsigned int	nn;

	i = 0;
	n_len = ft_nlen(n, 1);
	neg = 0;
	nn = (unsigned int)n;
	if (n < 0)
	{
		neg = 1;
		nn *= -neg;
	}
	i = n_len + neg;
	s = int_to_s(nn, neg, i);
	return (s);
}
