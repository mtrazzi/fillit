/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 09:52:35 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/04 15:00:01 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *head;
	t_list *tmp;

	head = *alst;
	tmp = NULL;
	while (head)
	{
		tmp = head->next;
		del(head->content, head->content_size);
		free(head);
		head = tmp;
	}
	*alst = 0;
}
