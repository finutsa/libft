/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:59:59 by enunu             #+#    #+#             */
/*   Updated: 2017/11/19 17:00:34 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	const char	*s1;
	char		*s2;
	int			i;

	i = 0;
	s1 = s;
	while (*s1 == c)
		++s1;
	++i;
	s2 = ft_strchr(s1, c);
	while (s2)
	{
		s1 = ++s2;
		while (*s1 == c)
			++s1;
		if (*s1)
			++i;
		s2 = ft_strchr(s1, c);
	}
	return (i);
}
