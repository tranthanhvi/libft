/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:57:58 by thantran          #+#    #+#             */
/*   Updated: 2024/11/16 15:57:59 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_c;

	last_c = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_c = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last_c);
}
