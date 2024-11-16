#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *newstr;
    size_t  len1;
    size_t  len2;
    size_t size;

    len1 =  ft_strlen(s1);
    len2 =  ft_strlen(s2);
    size = len1 + len2 + 1;
    newstr = (char *)malloc(size);
    if (!newstr)
        return (NULL);
    ft_strlcpy(newstr, s1, (len1 + 1));
    ft_strlcat(newstr, s2, (size + 1));
    return (newstr);    
}
int main(void)
{
    char    *str = ft_strjoin("Hello", " World!");
    printf("%s\n", str);
    free(str);
    return (0);
}