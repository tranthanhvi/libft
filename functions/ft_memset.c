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