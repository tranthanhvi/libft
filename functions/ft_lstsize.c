#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}
/* 
int main(void)
{
    t_list  *my_node = ft_lstnew("1");
    ft_lstadd_front(&my_node, ft_lstnew("2"));
    ft_lstadd_front(&my_node, ft_lstnew("3"));
    ft_lstadd_front(&my_node, ft_lstnew("3"));
    ft_lstadd_front(&my_node, ft_lstnew("3"));
    printf("%d\n", ft_lstsize(my_node));
    return (0);
} */