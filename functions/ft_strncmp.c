#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n && *s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
        n--;
    }
    if (n)
        return ((unsigned char )*s1 - (unsigned char )*s2);
    else
        return (0);
    
}