#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    const char *b;
    const char *l;
    size_t  remaining_len;
    
    if (*little == '\0')
        return ((char *)big);
    while (*big && len > 0)
    {
        b = big;
        l =  little;
        remaining_len = len;
        while (*b == *l && *l != '\0' && len)
        {
            b++;
            l++;
            remaining_len--;
        }
        if (*l == '\0')
            return ((char *)big);
        big++;
        len--;
    }
    return (NULL);
}

int main(void)
{
    printf("%s\n", ft_strnstr("Hello, World!", "World", 10));
    
    printf("%s\n", ft_strnstr("Hello, World!", "World", 15));

    printf("%s\n", ft_strnstr("Hello, World!", "World\0asd", 10));
    return (0);
}