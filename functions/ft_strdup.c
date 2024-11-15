#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t  len;
    char    *dup;
    char    *p;

    len = 0;
    while (s[len])
        len++;
    dup =  malloc(len + 1);
    if (!dup)
        return (NULL);
    p = dup;
    while (*s)
        *p++ = *s++;
    *p = '\0';
    return (dup);
}