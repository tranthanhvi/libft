#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next)
    {
        lst = lst->next;
    }
    return (lst);
}
/* int main(void)
{
    t_list  *my_node = ft_lstnew("last");
    ft_lstadd_front(&my_node, ft_lstnew("2"));
    ft_lstadd_front(&my_node, ft_lstnew("3"));
    ft_lstadd_front(&my_node, ft_lstnew("3"));
    ft_lstadd_front(&my_node, ft_lstnew("first"));
    printf("%s\n", (char *)ft_lstlast(my_node)->content);
    return (0);
} */