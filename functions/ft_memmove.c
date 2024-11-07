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

int main(void)
{
    char    src[] = "Hello, World!";
    char    *dest = src + 7;
   /*  memmove(dest, src, 6);
    printf("%s\n", dest);

    size_t  i = 0;
    
    while (i < 20) {
        dest[i] = '\0';
        i++;
    } */

    ft_memmove(dest, src, 6);
    printf("%s\n", dest);
    return (0);
}
