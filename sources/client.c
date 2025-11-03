/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:09:55 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/05/07 16:22:40 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	pid_t	server_id;
	int		i;

	i = 0;
	if (argc == 3)
	{
		server_id = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			ft_atob(server_id, argv[2][i]);
			i++;
		}
		ft_atob(server_id, '\0');
	}
	else
	{
		ft_printf("Incorrect number of arguments\n");
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
