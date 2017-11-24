/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:04:38 by enunu             #+#    #+#             */
/*   Updated: 2017/11/19 17:08:11 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		l;
	const char	*a;
	const char	*b;
	char		*blank;

	if (!s)
		return (NULL);
	a = s;
	blank = " \n\t\v\r\f";
	while (*a && ft_strchr(blank, *a))
		++a;
	if (!*a)
		return (ft_strnew(0));
	start = a - s;
	l = ft_strlen(s);
	b = s + l - 1;
	while (ft_strchr(blank, *b) && (b != a))
		--b;
	return (ft_strsub(s, start, b - a + 1));
}
