/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:01:37 by enunu             #+#    #+#             */
/*   Updated: 2017/11/24 14:38:22 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*node;
	t_list	*end_node;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	new_lst = ft_lstnew(tmp->content, tmp->content_size);
	if (!new_lst)
		return (0);
	end_node = new_lst;
	node = lst->next;
	while (node)
	{
		tmp = f(node);
		new_node = ft_lstnew(tmp->content, tmp->content_size);
		if (!new_node)
			return (0);
		end_node->next = new_node;
		end_node = end_node->next;
		node = node->next;
	}
	return (new_lst);
}*/

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list *rez;
	t_list *tmp1;
	t_list *tmp2;

	if (!lst || !f)
		return (NULL);
	tmp2 = f(lst);
	if ((rez = ft_lstnew(tmp2->content, tmp2->content_size)))
	{
		tmp1 = rez;
		lst = lst->next;
		while (lst)
		{
			tmp2 = f(lst);
			if (!(tmp1->next = ft_lstnew(tmp2->content, tmp2->content_size)))
				return (NULL);
			tmp1 = tmp1->next;
			lst = lst->next;
		}
	}
	return (rez);
}
