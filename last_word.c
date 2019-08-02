/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 18:56:57 by dnzioka           #+#    #+#             */
/*   Updated: 2019/08/01 17:11:22 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char        ft_refridgerator(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 127)
        {
            j = i + 1;
        }
        i++;
    }
    while (str[j] >= 33 && str[j] <= 127)
    {
        write (1, &str[j], 1);
        j++;
    }
    return (0);
}

int         main(int argc, char *argv[])
{
    if (argc == 2)
    {
        ft_refridgerator(argv[1]);
    }
    write (1, "\n", 1);
    return (0);
}