/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:53:51 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/23 12:02:24 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>



char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_string;

	i = 0;
	sub_string = (char *)malloc(len + 1);
	if (!sub_string)
	{
		return (NULL);
	}
	while (s[i] && (i < len))
	{
		if (s[i] == (char)start)
		{
			sub_string = ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
