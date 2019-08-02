/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 13:06:56 by dnzioka           #+#    #+#             */
/*   Updated: 2019/08/01 14:09:46 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void         *ft_strdup(char *src)
{
    int i;
    int len;
    char *str;

    i = 0;
    len = 0;
    while (src[len] != '\0')
    {
        len++;
    }
    if ((str = (char *)malloc(sizeof(*str) * len + 1)) == NULL)
    {
        return (NULL);
    }
    while (i < len)
    {
        str[i] = src[i];
        i++;
    }
    return (str);
}

int     main()
{
    char str[] = "Salut";
    printf("%s", ft_strdup(str));
    return (0);
}