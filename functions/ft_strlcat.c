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
/* 
int main(void)
{
    char    dst[20] = "Hello";
    const char  *src = ", World";
    size_t  size = 20;
    // Using the standard library strlcat
    printf("%zu\n", strlcat(dst, ", World!", size));  // Note the correct return type (size_t)
    printf("%s\n", dst);
    
    // Using ft_strlcat function
    char dst2[20] = "Hello";  // Reinitialize dst2
    printf("%zu\n", ft_strlcat(dst2, ", World!", size));
    printf("%s\n", dst2);

    return (0);
} */