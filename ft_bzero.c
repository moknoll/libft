/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:23:28 by mknoll            #+#    #+#             */
/*   Updated: 2024/10/22 14:42:14 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*byte_ptr;

	i = 0;
	byte_ptr = (unsigned char *) s;
	while (i < n)
	{
		byte_ptr[i] = 0;
		i++;
	}
}
