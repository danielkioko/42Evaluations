/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:09:58 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/29 14:25:29 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_ulstr(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
            write (1, &str[i], 1);
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            write (1, &str[i], 1);
        }
        else
        {
            write(1, &str[i], 1);
        }
        i++;
	}
    write (1, "\n", 1);
    return (*str);
}

int     main(int argc, char *argv[])
{
    if (argc == 2)
    {
        ft_ulstr(argv[1]);
    }
    else
    {
        write (1, "\n", 1);
    }
    return (0);
}
