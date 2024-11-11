#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new_node = (t_list *)malloc(sizeof(t_list));

    if (!new_node)
        return (NULL);
    new_node->content  = content;
    new_node->next = NULL;
    return (new_node);
}
/* 
int main(void)
{
    t_list *new_node = ft_lstnew("hehehe");
    printf("%s\n", (char *)new_node->content);
} */