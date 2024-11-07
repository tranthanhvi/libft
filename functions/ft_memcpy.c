 
#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
 {
    unsigned char   *d = (unsigned char *)dest;
    const unsigned char   *s = (const unsigned char *)src;
    
    while (n--)
    {
        *d++ = *s++;
    }
    return (dest);
 }

/* int main(void)
{
    char    src[] = "Hello, World";
    char    dest[20];

    memcpy(dest, src, 13);
    printf("%s\n", dest);
    size_t  i = 0;

    while (i < 20) {
        dest[i] = '\0';
        i++;
    }
    ft_memcpy(dest, src, 11);
    printf("%s\n", dest);
    return (0);
} */