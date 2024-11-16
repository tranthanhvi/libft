/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:54:05 by thantran          #+#    #+#             */
/*   Updated: 2024/11/16 15:54:17 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t  ft_count_words(char const *s, char c)
{
    size_t  count;

    count = 0;

    while (*s)
    {
        while(*s == c)
            s++;
        if (*s)
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return (count);
}
static char    *ft_strndup(const char *s, size_t n)
{
    char    *dup;
    
    dup = malloc(n + 1);
    if (!dup)
        return (NULL);
    ft_strlcpy(dup, s, n  + 1);
    dup[n] = '\0';
    return (dup);
}
char **ft_split(char const *s, char c)
{
    char **array;
    size_t  i;
    size_t  word_len;

    i = 0;
    array = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
    if (!array)
        return (NULL);
    while (*s)
    {
        while (*s == c)
            s++;
        word_len = 0;
        while (s[word_len] && s[word_len] != c)
            word_len++;
        if  (word_len > 0)
        {
            array[i] = ft_strndup(s, word_len);
            if(!array[i])
                return (NULL);
            i++;
        }
        s += word_len;
    }
    array[i] = NULL;
    return (array);
}