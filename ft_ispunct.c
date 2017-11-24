/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:37:30 by enunu             #+#    #+#             */
/*   Updated: 2017/11/20 16:40:52 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ispunct(int c)
{
	char *a;

	a = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
	if (ft_isascii(c) && ft_memchr(a, c, ft_strlen(a)))
		return (1);
	return (0);
}