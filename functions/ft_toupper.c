#include "libft.h"
int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return (c);
}
/* int main(void)
{
    printf("%c\n", ft_toupper('a'));
    return (0);
} */