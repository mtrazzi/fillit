/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lselement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 12:04:55 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/05 12:15:00 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lselement(t_list *beg_lst, unsigned int nbr)
{
	t_list	*list_for_len;
	int		i;

	list_for_len = beg_lst;
	while (list_for_len)
	{
		i++;
		list_for_len = list_for_len->next;
	}
	if (nbr > i)
		return (0);
	while (nbr)
	{
		beg_lst = beg_lst->next;
		nbr--;
	}
	return (beg_lst);
}
