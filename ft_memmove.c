/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:55:48 by mknoll            #+#    #+#             */
/*   Updated: 2024/10/15 13:14:14 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*byte_dest;
	unsigned char	*byte_src;

	i = 0;
	byte_dest = (unsigned char *) dest;
	byte_src = (unsigned char *) src;
	if (byte_dest < byte_src)
	{
		while (i < n)
		{
			byte_dest[i] = byte_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			byte_dest[i - 1] = byte_src[i - 1];
			i--;
		}
	}
	return (dest);
}
