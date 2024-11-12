#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *newstr;
    size_t  len1;
    size_t  len2;

    len1 =  ft_strlen(s1);
    len2 =  ft_strlen(s2);
    newstr = (char *)malloc(len1 + len2 + 1);
    if (!newstr)
        return (NULL);
    ft_strlcpy(newstr, s1, (len1  + 1));

    ft_strlcat(newstr, s2, len2 + 1);
    return (newstr);    
}
/* 
int main(void)
{
    char    *str = ft_strjoin("Hello", "World!");
    printf("%s\n", str);
    free(str);
    return (0);
} */