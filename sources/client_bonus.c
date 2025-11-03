/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:21:23 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/05/08 11:31:43 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	main(int argc, char **argv)
{
	pid_t	server_id;
	int		i;

	i = 0;
	if (argc == 3)
	{
		signal(SIGUSR2, confirm_msg);
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

void	confirm_msg(int signum)
{
	(void)signum;
	ft_printf("\n            へ  ♡\n");
	ft_printf("        ૮ > <)\n");
	ft_printf("        / ⁻៸|\n");
	ft_printf("     乀(ˍ,ل ل\n");
	ft_printf("Message received 😼!\n");
	exit (0);
}
