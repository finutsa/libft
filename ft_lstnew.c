/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:03:34 by enunu             #+#    #+#             */
/*   Updated: 2017/11/21 21:03:37 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	node = (t_list *)ft_memalloc(sizeof(t_list));
	if (node)
	{
		if (!content)
		{
			node->content = NULL;
			node->content_size = 0;
		}
		else
		{
			node->content = ft_memalloc(sizeof(content_size));
			if (node->content)
			{
				ft_memcpy(node->content, content, content_size);
				node->content_size = content_size;
			}
			else
				node->content_size = 0;
		}
		node->next = NULL;
	}
	return (node);
}
