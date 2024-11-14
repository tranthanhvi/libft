#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char   *)src;

    if (d < s)
    {
        ft_memcpy(dest, src, n);
    }
    else {
        d += n;
        s += n;
        while (n--)
        {
            *--d = *--s;
        }
        return (dest);
    }
}