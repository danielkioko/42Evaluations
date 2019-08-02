/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup12.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 13:41:28 by dnzioka           #+#    #+#             */
/*   Updated: 2019/08/01 17:11:20 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char         *ft_strdup(char *src)
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
    str = (char *)malloc(sizeof(str) * (len + 1));
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    return (str);
}

int         main()
{
    char str[] = "Bienfait";
    printf("%s", ft_strdup(str));
}