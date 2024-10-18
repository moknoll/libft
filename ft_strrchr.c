/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:16:04 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/17 09:25:49 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{
    int len;
    
    len = 0;

    while (s[len])
    {
        len++;
    }
    while (len >= 0)
    {
        if (s[len] == (char)c)
        {
            return((char *)&s[len]);
        }
        len--;
    }
    return (NULL);
}

int main()
{
    char *str = "hello how are";
    
    printf("%s", ft_strrchr(str, 'h'));
}