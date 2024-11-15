#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    if (*little == '\0')
        return ((char *)big);
    while (*big)
    {
        const char *b;
        const char *l;

        b = big;
        l =  little;
        while (*b == *l && *little != '\0' && len)
        {
            b++;
            l++;
            len--;
        }
        if (*l == '\0')
            return ((char *)big);
        big++;
    }
    return (NULL);
}

int main(void)
{
    printf("%s\n", strnstr("Hello, World!", "World", 10));
    printf("%s\n", ft_strnstr("Hello, World!", "World", 10));

    printf("%s\n", strnstr("Hello, World!", "World\0asd", 10));
    printf("%s\n", ft_strnstr("Hello, World!", "World\0asd", 10));
    return (0);
}