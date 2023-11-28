/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:02:54 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/28 10:55:18 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char delimiter)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;

	while (*str)
	{
		if (*str != delimiter && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delimiter && in_word)
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

static int	word_length(const char *str, char delimiter)
{
	int	length;

	length = 0;
	while (*str && *str != delimiter)
	{
		length++;
		str++;
	}
	return (length);
}

static char	*allocate_and_copy(const char *str, int length)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = *str;
		str++;
		i++;
	}
	word[length] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		words_count;
	char	**result;
	int		word_index;
	int		word_len;

	words_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (NULL);
	word_index = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_len = word_length(s, c);
			result[word_index] = allocate_and_copy(s, word_len);
			if (!result[word_index])
			{
				while (word_index >= 0)
				{
					free(result[word_index]);
					word_index--;
				}
				free(result);
				return (NULL);
			}
			s += word_len;
			word_index++;
		}
		else
			s++;
	}
	result[word_index] = NULL;
	return (result);
}
