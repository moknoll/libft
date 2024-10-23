/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:45:52 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/23 14:07:58 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// static void	*ft_memset(void *ptr, int value, int n)
// {
// 	int				i;
// 	unsigned char	*byte_ptr;

// 	i = 0;
// 	byte_ptr = (unsigned char *) ptr;
// 	while (i < n)
// 	{
// 		byte_ptr[i] = (unsigned char) value;
// 		i++;
// 	}
// 	return (ptr);
// }

// void	*ft_calloc(size_t nitems, size_t size)
// {
// 	size_t	total_size;
// 	void	*ptr;

// 	total_size = nitems * size;
// 	ptr = (char *)malloc(total_size);
// 	if (ptr == NULL)
// 	{
// 		return (NULL);
// 	}
// 	ft_memset(ptr, 0, total_size);
// 	return (ptr);
// }

static int	ft_digit_count(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = ft_digit_count(nb);
	str = malloc(i * sizeof(char) + 1);
	if (!(str))
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}
