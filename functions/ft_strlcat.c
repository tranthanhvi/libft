/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:55:13 by thantran          #+#    #+#             */
/*   Updated: 2024/11/16 15:55:23 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    char    *d;
    size_t  dlen;
    size_t  slen;
    const char  *s;

    d = dst;
    s = src;
    dlen = 0;
    slen = 0;
    while (size-- && *d)
    {
        dlen++;
        d++;
    }
    if (size == 0)
        return (dlen + slen);
    while (*s && --size)
    {
        *d++ = *s++;
        slen++;
    }
    *d = '\0';
    return (dlen + slen);
}