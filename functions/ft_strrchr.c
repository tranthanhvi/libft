#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char  *last_c = NULL;

    while  (*s)
    {
        if (*s  ==  (char)c)
            last_c = s;
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return ((char *)last_c);
}