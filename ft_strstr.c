/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:35:26 by enunu             #+#    #+#             */
/*   Updated: 2017/11/24 14:07:52 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *little)
{
	int i;
	int j;
	int s;

	i = 0;
	j = 0;
	s = 0;
	while (little[s])
		s++;
	if (s == 0)
		return ((char*)str);
	while (str[i])
	{
		while (little[j] == str[i + j])
		{
			if (j == s - 1)
				return ((char*)(str + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
