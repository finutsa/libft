/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:50:57 by enunu             #+#    #+#             */
/*   Updated: 2017/11/19 18:52:40 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char c_tmp;
	unsigned char *s_tmp;

	s_tmp = (unsigned char *)s;
	c_tmp = (unsigned char)c;
	while (n--)
	{
		if (*s_tmp == c_tmp)
			return (s_tmp);
		s_tmp++;
	}
	return (NULL);
}
