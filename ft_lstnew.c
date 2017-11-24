/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:03:34 by enunu             #+#    #+#             */
/*   Updated: 2017/11/24 14:38:18 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

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
}*/

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(sizeof(content));
		if (new->content == NULL)
			return (NULL);
		ft_memcpy((new->content), content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}

