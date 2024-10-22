/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:33:21 by mknoll            #+#    #+#             */
/*   Updated: 2024/10/22 10:26:55 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char s1[] = "Bon";
//  	char s2[] = "Bonjour";
//  	printf("%d\n", ft_strncmp(s1, s2, 3));
//  	printf("%d\n", ft_strncmp(s1, s2, 4));
// 	}
