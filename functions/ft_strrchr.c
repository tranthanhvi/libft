char *ft_strrchr(const char *s, int c)
{
    const char  *last_c = NULL;

    while  (*s)
    {
        if (*s  ==  (char)c)
            last_c = s;
        s++;
    }
    return (char *)(c == '\0' ? s : last_c);
}
/* 
int main(void)
{
    printf("%s\n", strrchr("Hello, World!", 'd'));
    printf("%s\n", ft_strrchr("Hello, World!", 'd'));
} */