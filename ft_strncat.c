/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:20:53 by enunu             #+#    #+#             */
/*   Updated: 2017/11/22 16:00:03 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1_tmp;
	size_t	l;

	s1_tmp = s1;
	s1_tmp = ft_strchr(s1_tmp, 0);
	l = ft_strlen(s2);
	if (l < n)
		n = l;
	ft_memmove(s1_tmp, s2, n);
	ft_memset((s1_tmp + n), 0, 1);
	return (s1);
}
