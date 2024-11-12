#include "libft.h"

int ft_str_is_alnum(char *str)
{
    unsigned int    i;

    i = 0;
    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0')
    {
        if (!(((str[i] >= 'a' && str[i] <='z') | (str[i] >= 'A' && str[i] <= 'Z')) || ((str[i] >= '0') && (str[i] <= '9'))))
        {
            return (0);
        }
        i++;
    }
    return (1);
}
/* 
int main(void)
{
    int result = ft_str_is_alnum("123a;");

    if (result)
        printf("%d\n", 1);
    else
        printf("%d\n", 0);
    return (0);
} */