/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 17:28:20 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/28 17:32:30 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;
	int check;

	i = 0;
	if (argc == 2)
	{
	
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'z' || argv[1][i] == 'Z')
			{	
				check = 1;
			}	
			i++;
		}
		if (check == 1)
		{
			write (1, "z", 1);
			write (1, "\n", 1);
		} 
		else
		{
			write (1, "\n", 1);
		}

	} 
	else
	{
		write (1, "z", 1);
		write (1, "\n", 1);
	}
}
