/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:04:19 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/29 13:51:47 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
                j = str[i] - 65;
				while (j >= 0)
				{
					write(1, &str[i], 1);
					j--;
				}
			}
			else if (str[i] >= 'a' && str[i] <= 'z')
			{
				j = str[i] - 97;
				while (j >= 0)
				{
					write(1, &str[i], 1);
					j--;
				}
			}
			else
			{
				write (1, &str[i], 1);
			}
			i++;
		}
	return (*str);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
    write (1, "\n", 1);
	return (0);
}
