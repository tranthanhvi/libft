#include "libft.h"

int ft_str_is_ascii(char *str)
{
    if(*str == '\0')
        return (1);
    while (*str)
    {
        if (!(*str >= 0 && *str <= 127))
        {
            return (0);
        }
        str++;
    }
    return (1);
}
/* 
int main(void)
{
    int result = ft_str_is_ascii(NULL);

    if (result)
        printf("%d\n", 1);
    else if (!result)
        printf("%d\n", 0);
} */