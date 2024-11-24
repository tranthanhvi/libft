/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:55:31 by thantran          #+#    #+#             */
/*   Updated: 2024/11/24 16:41:10 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		len;

	len = 0;
	while (src[len])
		len++;
	if (size)
	{
		while (*src && --size)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (len);
}
