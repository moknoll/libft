/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:35:13 by mknoll            #+#    #+#             */
/*   Updated: 2024/10/22 12:01:59 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int				i;
	unsigned char	*byte_dest;
	unsigned char	*byte_src;

	i = 0;
	byte_dest = (unsigned char *) dest;
	byte_src = (unsigned char *) src;
	while (i < n)
	{
		byte_dest[i] = byte_src[i];
		i++;
	}
	return (dest);
}
