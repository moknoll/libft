/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:59:56 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/16 13:38:22 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ft_memset.c>

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

void*   calloc(size_t nitems, size_t size)
{
    size_t total_size;
    void *ptr;

    total_size = nitems * size;
    ptr = (char *)malloc(total_size);

    if (ptr == NULL)
    {
        return (NULL);
    }

    ft_memset(ptr, 0, total_size);

    return (ptr);
    
}