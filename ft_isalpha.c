/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:43:02 by mknoll            #+#    #+#             */
/*   Updated: 2024/10/14 13:01:59 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	if (!(str[i]))
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122)))
			{
			return (0);
			}
		i++;
	}
	return (1);
}

int main()
{
	char *str = "HElLLo";
	//char str1[] = "HELLO";

	printf("%d", ft_isalpha(str));
    printf("%d", isalpha(str));    
}
