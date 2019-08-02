/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:49:58 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/25 12:31:37 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
        //Check for spaces or tabs ahead and goes to the next character
		while (*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
		{
			++argv[1];		
		}
        //If the character is not a space or tab, print it.
		while (*argv[1] != ' ' && (*argv[1] != ' ' || *argv[1] != '\t'))
		{
			write (1, argv[1]++, 1);	
		}
	}
	write(1, "\n", 1);
	return (0);
}
