/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bit_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:20:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/05 14:31:30 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	ft_swap_bit_char(unsigned char c)
{
	char new;

	new = c;
	c = c >> 4;
	new = new << 4;
	return (new + c);
}
