#include <unistd.h>
#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    if(s)
    {
        while (*s)
            ft_putchar_fd(*s++, fd);
        ft_putchar_fd('\n', fd);
        
    }
}

int main(void)
{
    ft_putendl_fd("Hello", 1);
    return (0);
}