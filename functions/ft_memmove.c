/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:52:29 by thantran          #+#    #+#             */
/*   Updated: 2024/11/16 15:52:32 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char   *)src;
    if (d < s)
    {
        ft_memcpy(dest, src, n);
    }
    else 
    {
        d += n;
        s += n;
        while (n--)
            *--d = *--s;
    }
    return (dest);
}