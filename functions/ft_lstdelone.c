#include "libft.h"

static void del_content(void *content)
{
    free(content);
}

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if(lst && del)
    {
        del(lst->content);
        free(lst);
    }
}

static void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}
/* int main(void)
{
    t_list *my_node = ft_lstnew(("hehehe"));
    ft_lstadd_back(&my_node, ft_lstnew(ft_strdup("The one that needs to be deleted")));
    ft_lstadd_back(&my_node, ft_lstnew("hehehe"));
    ft_lstadd_back(&my_node, ft_lstnew("hehehe"));
    print_list(my_node);
    ft_lstdelone(my_node->next, del_content);
    printf("After deletion:\n");
    print_list(my_node);
    return (0);

} */