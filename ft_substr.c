/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:53:51 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/27 08:44:05 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static char	*ft_strdup(char *s)
{
	int		i;
	int		len;
	char	*copy;

	i = 0;
	len = 0;
	while (s[len])
	{
		len++;
	}
	copy = (char *) malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_string;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	if (start > ft_strlen(s))
        return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
	{
		len = ft_strlen(s) - start;
	}
	sub_string = (char *)malloc(len + 1);
	if (!sub_string)
	{
		return (NULL);
	}
	while (i < len)
	{
		sub_string[i] = s[start + i];
		i++;
	}
	sub_string[len] = '\0';
	return (sub_string);
}

int main()
{
	char *result = ft_substr("hola", 0, 20);
	char *result2 = ft_substr("", 0, 1);
	char *result3 = ft_substr("hola", 4, 20);

	printf("%s\n", result);
	printf("%s\n", result2);
	printf("%s\n", result3);
}
