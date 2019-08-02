/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 15:13:01 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/26 15:47:42 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	char	letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] > 'A' && argv[1][i] < 'Z')
			{
				letter = argv[1][i] - 64;
				while (letter--)
					write (1, &argv[1][i], 1);
			}
			else if (argv[1][i] > 'a' && argv[1][i] < 'z')

			{
				letter = argv[1][i] - 95;
				while (letter--)
					write (1, &argv[1][i], 1);
			}
			else
			{
				write (1, &argv[1][i], 1);
			}
			i++;
		}		
	}
	write (1, "\n", 1);
	return (0);
}
