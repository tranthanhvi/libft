#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if (s && f)
        while (s[i])
        {
            f(i, &s[i]);
            i++;
        }
}


/* static void    ft_to_uppper_i(unsigned int i, char *c)
{
    (void)i;
    if (c && *c >= 'a' && *c <= 'z')
        *c -=  32;
} */
/* 
int main()
{
    char    str[] = "thanh";
    ft_striteri(str, ft_to_uppper_i);
    printf("%s\n", str);
    return (0);
} */