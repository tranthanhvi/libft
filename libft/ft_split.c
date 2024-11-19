/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantran <thantran@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:54:05 by thantran          #+#    #+#             */
/*   Updated: 2024/11/19 20:42:10 by thantran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
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

static char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;

	dup = malloc(n + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, n + 1);
	dup[n] = '\0';
	return (dup);
}

static void	*ft_free_array(char **array, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(array[i++]);
	free(array);
	return (NULL);
}

static char	*ft_extract_word(const char **s, char c)
{
	size_t	len;
	char	*word;

	while (**s == c)
		(*s)++;
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = ft_strndup(*s, len);
	*s += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	array = malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (i < words)
	{
		array[i] = ft_extract_word(&s, c);
		if (!array[i])
			return (ft_free_array(array, i));
		i++;
	}
	array[i] = NULL;
	return (array);
}
