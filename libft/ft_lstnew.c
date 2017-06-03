/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 18:59:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/04 11:45:38 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;
	void	*content_copy;

	if (!(head = (t_list*)malloc(sizeof(t_list))))
		return (0);
	if (content == 0)
	{
		head->content = 0;
		head->content_size = 0;
	}
	else
	{
		if (!(content_copy = (void*)malloc(content_size)))
			return (0);
		head->content = ft_memcpy(content_copy, content, content_size);
		head->content_size = content_size;
	}
	head->next = 0;
	return (head);
}
