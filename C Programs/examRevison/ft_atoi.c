/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 10:22:20 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/26 10:50:29 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 0;
    //Step 1: Check ASCII Rangge
	while (str[i] <= 32 && str[i] != 127)
	{
		i++;
	}
    //Step 2: Assign the variable 'sign' a value if theres a '-' sign
	if (str[i] == '-')
	{
		sign = 1;
	}
    //Step 3: Increment 'i' to go to the next character if there's a '+' or '-' sign
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
    //Step 4: Check for the digits
	while(str[i] != '\0' && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10;
		res = res + str[i] - '0';
		i++;
	}
    //Step 5: If 'sign' contains any value, return a negative number, otherwise return a positive number
	if (sign == 1)
	{
		return (-res);
	}
	else
	{
		return (res);
	}
} 
int		main()
{
	printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
}
