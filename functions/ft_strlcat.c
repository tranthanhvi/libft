
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
    size = size ? size : dlen + 1;
    while (*s && --size)
        *d++ = *s++;
    *d = '\0';
    while (*s++)
        slen++;
    return dlen + slen;
}
/* 
int main(void)
{
    char dst[20] = "Hello";
    printf("%u\n", ft_strlcat(dst, ", World", 20));
    printf("%s\n", dst);
    return (0);

} */