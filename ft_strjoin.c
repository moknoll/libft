/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:17:29 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/18 15:39:31 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i; 
    int j;
    int len_s1;
    int len_s2;
    char *new_string;

    len_s1 = 0;
    len_s2 = 0;
    i = 0;
    j = 0;
    while (s1[len_s1])
    {
        len_s1++;
    }
    while (s2[len_s2])
    {
        len_s2++;
    }
    new_string = (char *)malloc(len_s1 + len_s2 + 1);

    if (!new_string)
    {
        return (NULL);
    }
    while (s1[i])
    {
        new_string[j] = s1[i]; 
        i++;
        j++;
    }
    i = 0;
    while (s2[i])
    {
        new_string[j] = s2[i];
        i++;
        j++;
    }
    new_string[j] = '\0';

    return (new_string);
}

int main ()
{
    char *str1 = "Hello"; 
    char *str2 = "World"; 

    printf("%s", ft_strjoin(str1, str2));
}