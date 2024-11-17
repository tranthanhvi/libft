/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:51:31 by thantran          #+#    #+#             */
/*   Updated: 2024/11/16 15:51:32 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t size)
{
	unsigned char	*p;

	p = (unsigned char *)pointer;
	while (size > 0)
	{
		*p = (unsigned char)value;
		p++;
		size--;
	}
	return (pointer);
}
