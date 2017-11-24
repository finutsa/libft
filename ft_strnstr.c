/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:46:37 by enunu             #+#    #+#             */
/*   Updated: 2017/11/19 18:30:42 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*r0;
	size_t	l;
	size_t	k;

	if (!(*little))
		return ((char *)big);
	if (len > (size_t)(ft_memchr(big, 0, len) - (void *)big) + 1)
		return (NULL);
	r0 = ft_memchr(big, *little, len);
	if (!r0)
		return (NULL);
	l = ft_strlen(little);
	len = len - (r0 - big);
	if (l > len)
		return (NULL);
	k = len;
	if (l < len)
		k = l;
	if (!ft_memcmp(r0, little, k))
		return (r0);
	return (ft_strnstr(++r0, little, len));
}
