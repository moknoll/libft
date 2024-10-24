/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:47:25 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/24 12:25:04 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*allocate_word(const char *s, char c)
{
	int		i;
	int		word_len;
	char	*word;

	word_len = 0;
	i = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	word = (char *)malloc((word_len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[word_len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = 0;
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !(result))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			result[i] = allocate_word(s, c);
			if (!result[i])
				return (NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
