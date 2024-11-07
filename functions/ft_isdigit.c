int ft_str_is_digit(char *str)
{
    unsigned int    i;

    i = 0;
    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0')
        {
            if (!((str[i] >= '0') && (str[i] <= '9')))
            {
                return (0);
            }
            i++;
        }
    return (1);
}

/* #include <unistd.h>
int main(void)
{
    int result = ft_str_is_digit("123");

    if (result == 1)
        write(1, "1", 1);
    else if (result ==  0)
        write(1, "0", 1);
    return (0);
} */