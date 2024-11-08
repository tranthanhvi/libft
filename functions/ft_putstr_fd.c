#include <unistd.h>
#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    if (s)
        while (*s)
            ft_putchar_fd(*s++, fd);
}

int main(void)
{
    ft_putstr_fd("Hello  hihii\n", 1);
    return (0);
}