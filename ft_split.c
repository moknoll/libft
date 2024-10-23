/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:47:25 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/23 09:25:17 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int count_words(char const *s, char c) {
	int count ;
	int in_word;

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
	return count;
}

char **ft_split(char const *s, char c) {
    char **result;
    int i;
	int j;
	int word_len;

	i = 0;
	j = 0;
	word_len = 0;
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));

	if (!s || !(result))
		return NULL;

	while (*s) {
		if (*s != c)
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			if (!(result[i] = (char *)malloc(word_len + 1)))
				return NULL;
			j = 0;
			while (j < word_len)
				result[i][j++] = *s++;
				result[i++][j] = '\0';
		} else
			s++;
	}
	result[i] = NULL;
	return result;
}


