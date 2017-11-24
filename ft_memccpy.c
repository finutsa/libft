/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:37:29 by enunu             #+#    #+#             */
/*   Updated: 2017/11/20 13:15:02 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char c_tmp;
	unsigned char *dst_tmp;
	unsigned char *src_tmp;

	c_tmp = (unsigned char)c;
	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	while (n--)
	{
		*dst_tmp++ = *src_tmp;
		if (*src_tmp == c_tmp)
			return (dst_tmp);
		src_tmp++;
	}
	return (NULL);
}
