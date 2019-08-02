/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:45:53 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/26 13:45:31 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
		{
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		}
		if (argv[2][0] == '-')
		{
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		}
		if (argv[2][0] == '*')
		{
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		}
		if (argv[2][0] == '/')
		{
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		}
		if (argv[2][0] == '%')
		{
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
		}	
	}
	printf("\n");
	return (0);
}
