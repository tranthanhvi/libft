#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include <ctype.h> //delete

// Memory functions
void    *ft_memset(void *pointer, int value, size_t size);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);


void    ft_bzero(void *s, size_t n);

// String functions
size_t ft_strlen(const char *str);
char    *ft_strdup(const char   *str);
char    *ft_strcpy(const char   *str);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);

// Character functions
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
void    ft_putchar_fd(char c, int fd);

// Linked list functions
typedef struct  s_list
{
    void    *content;
    struct  s_list  *next;
}   t_list;

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif