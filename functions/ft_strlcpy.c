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