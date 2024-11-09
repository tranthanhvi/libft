#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    size_t  i;

    i = 0;

    if (!s || !f)
        return (NULL);
    str = (char *)malloc(strlen(s) + 1);
    if (!str)
        return (NULL);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    char    *str = ft_strmapi("hello", ft_toupper);
    printf("%s\n", str);
    free(str);
    return (0);
}