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