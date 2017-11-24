/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:16:48 by enunu             #+#    #+#             */
/*   Updated: 2017/11/20 16:51:07 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t l;

	l = ft_strlen(src);
	if (l < len)
	{
		dst = ft_memset(dst, 0, len);
		len = l;
	}
	return (ft_memmove(dst, src, len));
}
