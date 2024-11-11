#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    if (!new)
        return;
    if (!*lst)
    {
        *lst = new;
        return;
    }
    last = ft_lstlast(*lst);
    last->next = new;    
}
/* 
int main(void)
{
    t_list  *head = ft_lstnew("1st");
    ft_lstadd_back(&head, ft_lstnew("2nd"));
    ft_lstadd_back(&head, ft_lstnew("3rd"));
    t_list  *temp = head;
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    return (0);
} */