#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;

    p = (const unsigned char *)s;
    while (n--)
    {
        if (*p == (char)c)
            return ((void *)p);
        p++;
    }
    return (NULL);
}

int main(void)
{
    printf("%s\n",  (char *)memchr("Hello, World!", 'o', 13));
    printf("%s\n",  (char *)ft_memchr("Hello, World!", 'o', 13));
}