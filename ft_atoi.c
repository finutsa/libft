/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:41:14 by enunu             #+#    #+#             */
/*   Updated: 2017/11/24 15:41:18 by enunu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_atoi(const char *str)
{
	long int n;
	long int i;
	long int isnegative;

	n = 0;
	i = 0;
	isnegative = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		isnegative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = 10 * n + (str[i] - '0');
		i++;
		if (n > 2147483648 && isnegative == -1)
			return (0);
		if (n > 2147483647 && isnegative == 1)
		return (-1);
	}
	if (isnegative == 1)
		return (int)(-n);
	else
		return (int)(n);
}*/

int	ft_atoi(const char *str)
{
	long int r;
	int sign;

	r = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (
		*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
		if (r > 2147483648 && sign == -1)
			return (0);
		if (r > 2147483647 && sign == 1)
			return (-1);
	}
	return (sign * r);
}
