/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 15:42:14 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/05 09:59:02 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*head;
	t_list	*tmp;

	if (!(lst) || !(f))
		return (0);
	tmp = NULL;
	first = NULL;
	while (lst)
	{
		if (!(head = f(lst)))
			return (0);
		if (first)
		{
			tmp->next = head;
			tmp = tmp->next;
		}
		else
		{
			first = head;
			tmp = first;
		}
		lst = lst->next;
	}
	return (first);
}
