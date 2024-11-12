#include "libft.h"

static void    del_content(void *content)
{
    free(content);
}

static void    *to_upper(void *content)
{
    char    *str;
    char    *original;

    str = (char *)content;
    original = str;
    while (*str)
    {
        *str = ft_toupper(*str);
        str++;
    }    
    return (original);

}

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_node;
    
    new_list= NULL;

    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}
/* 
int main(void)
{
    t_list  *my_node = ft_lstnew(ft_strdup("hello"));
    ft_lstadd_back(&my_node, ft_lstnew(ft_strdup("thank")));
    ft_lstadd_back(&my_node, ft_lstnew(ft_strdup("you")));
    ft_lstadd_back(&my_node, ft_lstnew(ft_strdup("veri")));
    ft_lstadd_back(&my_node, ft_lstnew(ft_strdup("nhieu")));
    
    t_list  *new_list = ft_lstmap(my_node, to_upper, del_content);
    t_list  *current = new_list;

    while (current)
    {
        printf("%s\n", current->content);
        current = current->next;
    }
    return (0);
} */