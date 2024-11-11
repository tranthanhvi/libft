#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;

    while (*lst)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
    *lst = NULL;
}

void del_content(void *content)
{
    free(content);
}
int main(void)
{
    t_list *my_node = ft_lstnew(strdup("1"));
    ft_lstadd_back(&my_node, ft_lstnew(strdup("2")));
    ft_lstadd_back(&my_node, ft_lstnew(strdup("3")));

    ft_lstclear(&my_node, del_content);
    printf("%p\n", (void *)my_node);
}

