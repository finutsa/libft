/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:17:44 by enunu             #+#    #+#             */
/*   Updated: 2017/11/21 21:17:46 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 == s2)
		return (1);
	else if (!(s1 && s2))
		return (0);
	while (n--)
	{
		if (*s1 != *s2)
			return (0);
		if ((!*s1) || (!*s2))
			break ;
		++s1;
		++s2;
	}
	return (1);
}