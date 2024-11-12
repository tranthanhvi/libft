#include "libft.h"
static int ft_numlen(int n)
{
    int len;
    len = (n <= 0) ? 1 : 0;
    while (n)
    {
        len++;
        n /= 10;
    }
    return (len);
}

char *ft_itoa(int n)
{
    char    *str;
    int len;
    unsigned int    num;

    len = ft_numlen(n);
    if (n < 0)
        num = -n;
    else
        num = n;
    str = (char *)malloc(len + 1);
    if(!str)
        return (NULL);
    str[len--]  = '\0';
    if (n == 0)
        str[0] = '0';
    else
        str[0] = '-';
    while (num != 0)
    {
        str[len--] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
}
/* 
int main(void)
{
    printf("%s\n", ft_itoa(-12345));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(6789));
    return (0);
} */