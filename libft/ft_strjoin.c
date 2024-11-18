/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:55:09 by thantran          #+#    #+#             */
/*   Updated: 2024/11/18 19:43:10 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len1;
	size_t	len2;
	size_t	size;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	size = len1 + len2 + 1;
	newstr = (char *)malloc(size);
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, (len1 + 1));
	ft_strlcat(newstr, s2, (size + 1));
	return (newstr);
}
