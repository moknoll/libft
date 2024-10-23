/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:53:51 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/23 13:01:49 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *s)
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
	if (!s || start >= ft_strlen(s))
	{
		return (NULL);
	}
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
