#include <stdio.h>

int ft_strlcat(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    unsigned  j;

    j = 0;
    i = 0;

    while(dest[i])
    {
        i++;
    }

    while(src[j] && j < (n - 1))
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return (i);
}