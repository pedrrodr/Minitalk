/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:21:09 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/05/08 10:57:35 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	main(int argc, char **argv)
{
	struct sigaction	signal_config;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error: No arguments needed\n");
		return (EXIT_FAILURE);
	}
	signal_config.sa_sigaction = ft_btoa;
	sigemptyset(&signal_config.sa_mask);
	signal_config.sa_flags = SA_SIGINFO;
	ft_printf("SERVER ID=%d\n", getpid());
	sigaction(SIGUSR1, &signal_config, NULL);
	sigaction(SIGUSR2, &signal_config, NULL);
	while (42)
		pause();
	return (EXIT_SUCCESS);
}
