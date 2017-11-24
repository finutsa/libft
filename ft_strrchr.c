/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:23:31 by enunu             #+#    #+#             */
/*   Updated: 2017/11/19 17:44:52 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c_tmp;
	char			*s_tmp;
	size_t			l;

	s_tmp = ft_strchr(s, 0);
	l = ft_strlen(s) + 1;
	c_tmp = (unsigned char)c;
	while (l--)
	{
		if (*s_tmp == c_tmp)
			return (s_tmp);
		--s_tmp;
	}
	return (NULL);
}
