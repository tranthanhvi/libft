#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *p;
    size_t  total;

    total =  nmemb * size;
    p = malloc(nmemb * size);
    if (!p)
        return (NULL);
    while (total--)
        *p++ = 0;
    return (p - nmemb * size);
}
