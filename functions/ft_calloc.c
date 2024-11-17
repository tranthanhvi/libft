/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:47:00 by thantran          #+#    #+#             */
/*   Updated: 2024/11/16 15:48:20 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			total;

	total = nmemb * size;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (total--)
		*p++ = 0;
	return (p - nmemb * size);
}
