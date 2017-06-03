/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 13:47:24 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/03 17:44:40 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int nb2;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb2 = nb * -1;
	}
	else
		nb2 = nb;
	if (nb2 / 10)
		ft_putnbr_fd(nb2 / 10, fd);
	ft_putchar_fd((nb2 % 10) + '0', fd);
}
