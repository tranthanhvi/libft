/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:57:29 by thantran          #+#    #+#             */
/*   Updated: 2024/11/16 15:57:31 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	size_t		remaining_len;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len > 0)
	{
		b = big;
		l = little;
		remaining_len = len;
		while (*b == *l && *l != '\0' && len)
		{
			b++;
			l++;
			remaining_len--;
		}
		if (*l == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
