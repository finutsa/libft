/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:15:46 by enunu             #+#    #+#             */
/*   Updated: 2017/11/19 18:33:27 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_word(char const *s, char const *start, char *end)
{
	if (end)
		return (ft_strsub(s, start - s, end - start));
	else if (ft_strlen(s) - (start - s))
		return (ft_strsub(s, start - s, ft_strlen(s) - (start - s)));
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**t;
	char		**t0;
	const char	*s1;
	char		*s2;
	int			i;

	if (!s)
		return (NULL);
	i = ft_countwords(s, c);
	t = (char **)ft_memalloc((i + 1) * sizeof(char *));
	if (!t)
		return (NULL);
	s1 = s;
	t0 = t;
	s2 = NULL;
	while (i--)
	{
		while (*s1 == c)
			++s1;
		s2 = ft_strchr(s1, c);
		*t++ = ft_word(s, s1, s2);
		if (s2)
			s1 = ++s2;
	}
	return (t0);
}
