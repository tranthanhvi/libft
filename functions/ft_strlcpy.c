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
/* 
int main(void)
{
    char    dst[13];
    printf("%u\n", ft_strlcpy(dst, "Hello, World!", 10));
    printf("%s\n", dst);
    return (0);
} */