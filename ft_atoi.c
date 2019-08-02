/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:13:12 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/31 13:01:01 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 0;
    res = 0;
    while (str[i] <= 32 && str[i] != 127)
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = 1;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        i++;
    }
    while (str[i] != '\0' && (str[i] >= '0') && (str[i] <= '9'))
    {
        res = res * 10;
        res += str[i] - '0';
        i++;
    }
    if (sign == '-')
    {
        return (-res);
    }
    else
    {
        return (res);
    }
    return (0);
}

int     main()
{
    printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("     +42"));
	printf("atoi: %d\n", atoi("     +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
    
    return 0;
}