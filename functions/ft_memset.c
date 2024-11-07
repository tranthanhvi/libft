#include "libft.h"
void *ft_memset(void *pointer, int value, size_t size)
{
    unsigned char    *p;
    
    p = (unsigned char *)pointer;
    while (size > 0)
    {
        *p = (unsigned char)value;
        p++;
        size--;
    }
}
// #include <stdio.h>
// int main(void)
// {
//     char    buffer[10];
//     char    *pointer;

//     ft_memset(buffer, 'A', 10);
//     pointer = buffer;
//     while (pointer < buffer + 10)
//     {
//         printf("%c\n", *pointer);
//         pointer++;
//     }
//     return (0);
// }