#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    c;
    
    if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
    else
    {   
        if (n < 0)
        {
            ft_putchar_fd('-', fd);
            n = -n;
        }
        if (n > 9)
            ft_putnbr_fd(n / 10, fd);
        c  = (n % 10) + '0';
        ft_putchar_fd(c, fd);  
    }    
}

int main(void)
{
    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd('\n', 1);
    return (0);
}