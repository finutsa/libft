/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:23:27 by enunu             #+#    #+#             */
/*   Updated: 2017/11/20 16:52:55 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*nul_found;
	size_t	dst_l;
	size_t	src_l;

	nul_found = ft_memchr(dst, 0, size);
	src_l = ft_strlen(src);
	if (!nul_found)
		return (size + src_l);
	dst_l = ft_strlen(dst);
	ft_strncat(dst, src, (size - dst_l - 1));
	return (dst_l + src_l);
}
