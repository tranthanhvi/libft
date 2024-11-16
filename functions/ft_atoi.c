#include "libft.h"

int ft_atoi(const char *nptr)
{
    int result;
    int sign;

    result = 0;
    sign = 1;

    while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
        nptr++;
    if (*nptr == '-' || *nptr == '+')
    {
        if(*nptr++ == '-')
            sign = -1;
        else
            sign = 1;
    }
    while (*nptr >= '0' && *nptr <= '9')
        result = result * 10 + (*nptr++ - '0');
    return result * sign;
}