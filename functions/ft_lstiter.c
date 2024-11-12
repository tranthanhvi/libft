#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
/* static void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *my_node = ft_lstnew("1st");
    ft_lstadd_back(&my_node, ft_lstnew("2nd"));
    ft_lstadd_back(&my_node, ft_lstnew("3rd"));
    ft_lstiter(my_node, print_content);
} */