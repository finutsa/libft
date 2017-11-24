/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:28:24 by enunu             #+#    #+#             */
/*   Updated: 2017/11/20 16:46:48 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t n0;
	size_t l;

	n0 = n;
	l = ft_strlen(s1);
	if (l < n)
		n = l;
	l = ft_strlen(s2);
	if (l < n)
		n = l;
	if (n0 && (!n || n0 > n))
		++n;
	return (ft_memcmp(s1, s2, n));
}
