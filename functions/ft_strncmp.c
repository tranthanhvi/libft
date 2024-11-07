#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n && *s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
        n--;
    }
    return n ? (unsigned char )*s1 - (unsigned char )*s2 : 0;
}

int main(void)
{
    printf("%d\n", strncmp("Hello", "Hella", 5));
    printf("%d\n", strncmp("Hello", "Hella", 4));
    printf("%d\n", ft_strncmp("Hello", "Hella", 5));
    printf("%d\n", ft_strncmp("Hello", "Hella", 4));
    return (0);
}
