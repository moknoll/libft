/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moritzknoll <moritzknoll@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:17:39 by moritzknoll       #+#    #+#             */
/*   Updated: 2024/10/15 09:21:11 by moritzknoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *s)
{
    int i; 
    int len;
    char *copy;

    i = 0; 
    len = 0;

    while(s[len])
    {
        len++;
    }

    copy = (char *) malloc(len + 1);
    if (copy == NULL)
    {
        return (NULL);
    }

    while(s[i])
    {
        copy[i] = s[i];
        i++;
    }

    copy[i] = '\0';
    return (copy);
}