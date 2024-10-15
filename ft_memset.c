/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:15:02 by mknoll            #+#    #+#             */
/*   Updated: 2024/10/15 12:21:28 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, int n)
{
	int				i;
	unsigned char	*byte_ptr;

	i = 0;
	byte_ptr = (unsigned char *) ptr;
	while (i < n)
	{
		byte_ptr[i] = (unsigned char) value;
		i++;
	}
	return (ptr);
}