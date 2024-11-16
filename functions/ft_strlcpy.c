/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:55:31 by thantran          #+#    #+#             */
/*   Updated: 2024/11/16 15:55:31 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    const char  *s;
    size_t  len = 0;

    s = src;
    while (*s++)
        len++;
    if (size)
    {
        while (*src && --size)
            *dst++ = *src++;
        *dst = '\0';
    }
    return (len);
}