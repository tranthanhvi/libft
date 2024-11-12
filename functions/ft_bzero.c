#include "libft.h"
void    ft_bzero(void *s, size_t size)
{
    ft_memset(s, 0, size);
}
/* 
int main(void)
{
    char    buffer[10];
    char    *pointer;
    
    ft_bzero(buffer, 10);
    pointer = buffer;
    while (pointer < buffer + 10)
    {
        printf("%s\n", pointer);
        pointer++;
    }
    return (0);
} */