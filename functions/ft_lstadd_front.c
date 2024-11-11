#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new)
    {
        new->next = *lst;
        *lst = new;
    }
}
/* 
int main(void)
{
    t_list *head = ft_lstnew("hehe");
    t_list *new_head = ft_lstnew("hihi");
    ft_lstadd_front(&head, new_head);
    printf("%s\n", (char *)head->content);
    printf("%s\n", (char *)head->next->content);
    return (0);
} */