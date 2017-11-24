/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:40:47 by enunu             #+#    #+#             */
/*   Updated: 2017/11/20 13:55:00 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		l0;
	int		l;
	int		k;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	l = (int)len;
	l0 = l - 1;
	k = -1;
	if (dst > src)
	{
		l0 = 0;
		k = 1;
	}
	while (l--)
		*(d + l0 + k * l) = *(s + l0 + k * l);
	return (dst);
}
