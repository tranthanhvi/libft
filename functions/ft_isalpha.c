#include "libft.h"
int ft_isalpha(int c)
{

    if ((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}

/* int	main(void)
{
	int	result;
	
	result = ft_isalpha('2');
	if (result == 0)
        printf("%d\n", 0);
	else if (result == 1)
        printf("%d\n", 1);
	return (0);
} */