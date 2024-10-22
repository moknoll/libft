/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:45:52 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/22 11:10:20 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int get_num_length(int n)
{
	int	len;
	len = (n <= 0) ? 1 : 0;

	while (n != 0)
	{
		len++;
		n /= 10;
	}

	return (len);
}

char	*ft_itoa(int n)
{
	int	len;
	get_num_length(n);
	char	*str = (char *)malloc(len + 1);
	long	num = n;
	int	i;

	i = len - 1;

	if (!str)
		return (NULL);

	str[len] = '\0';

	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}

	if (num == 0)
		str[0] = '0';

	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	return (str);
}
