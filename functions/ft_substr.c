#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t i;

    i = 0;
    if (!s || start >= ft_strlen(s))
        return ft_strdup("");
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    substr = (char *)malloc(len + 1);
    if (!substr)
        return (NULL);
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);  
}
/* 
int main(void)
{
    char *str = ft_substr("Hello, World!", 7, 7);
    printf("%s\n", str);
    free(str);
    return (0);;
} */