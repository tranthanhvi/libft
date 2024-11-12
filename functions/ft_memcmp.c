#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;

    p1 = s1;
    p2 = s2;
    while (n--)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
    }
    return (0);
}
/* int main(void)
{
    printf("%d\n", memcmp("Hello", "Hella", 5));
    printf("%d\n", ft_memcmp("Hello", "Hella", 5));
} */
