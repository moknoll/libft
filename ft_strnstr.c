/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:27:03 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/17 09:40:36 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    while(big[i])
    {
        j = 0;
        if (big[i] == little[j] && (i < len))
        {
            while (little[j] != '\0')
            {
                return (&big[j]);
                j++;
            }
        }
        i++;
    }
    return (NULL);
}

int main()
{
    char *big = "bim bam buz";
    char *little = "bam";

    printf("%s", ft_strnstr(big, little, 19));
}