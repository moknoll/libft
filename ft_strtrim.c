/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:54:08 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/22 12:09:59 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	is_in_set(char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
		{
			return (1);
			j++;
		}
	}
	return (0);
}

static int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

static char	*ft_strncpy(char *dest, char const *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*new_str;

	start = 0;
	end = ft_strlen(s1) - 1;
	new_str = (char *)malloc(ft_strlen(s1) + 1);
	if (!new_str)
		return (NULL);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end >= start && is_in_set(s1[end], set))
		end--;
	len = end - start + 1;
	if (!new_str)
		return (NULL);
	ft_strncpy(new_str, &s1[start], len);
	new_str[len] = '\0';
	return (new_str);
}

// int main()
// {
//     char *str = "    HEllo    ";

//     printf("%s", ft_strtrim(str, " "));
// }