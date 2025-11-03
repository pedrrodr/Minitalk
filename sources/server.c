/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:09:52 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/05/08 10:55:45 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error: No arguments needed\n");
		return (EXIT_FAILURE);
	}
	ft_printf("SERVER ID=%d\n", getpid());
	signal(SIGUSR1, ft_btoa);
	signal(SIGUSR2, ft_btoa);
	while (42)
		pause();
	return (EXIT_SUCCESS);
}
