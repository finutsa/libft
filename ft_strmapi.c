/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:17:19 by enunu             #+#    #+#             */
/*   Updated: 2017/11/21 21:17:21 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_cpy0;
	char	*s_cpy1;

	if (!s)
		return (NULL);
	s_cpy0 = ft_strdup(s);
	if (!s_cpy0)
		return (NULL);
	s_cpy1 = s_cpy0;
	while (*s_cpy1)
	{
		*s_cpy1 = f(s_cpy1 - s_cpy0, *s_cpy1);
		s_cpy1++;
	}
	return (s_cpy0);
}
