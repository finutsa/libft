/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:16:22 by enunu             #+#    #+#             */
/*   Updated: 2017/11/21 21:16:24 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	if (s1 && s2)
	{
		s = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (s)
			return (ft_strcat(ft_strcat(s, s1), s2));
	}
	return (NULL);
}
