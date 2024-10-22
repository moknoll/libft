/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:28:11 by mknoll            #+#    #+#             */
/*   Updated: 2024/10/22 11:08:58 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < (n - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
