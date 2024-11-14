int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

#include "libft.h"

int main(void)
{  
    printf("%d\n", ft_isascii(L'€')); //L prefix is for wide character like '€'
    printf("%d\n", ft_isascii('a')); 
}