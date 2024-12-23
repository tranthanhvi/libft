/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:46:33 by thantran          #+#    #+#             */
/*   Updated: 2024/11/24 17:03:47 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr++ == '-')
			sign = -1;
		else
			sign = 1;
	}
	while (*nptr >= '0' && *nptr <= '9')
		result = result * 10 + (*nptr++ - '0');
	if (result * sign > INT_MAX)
		return (-1);
	else if (result * sign < INT_MIN)
		return (0);
	return (result * sign);
}
