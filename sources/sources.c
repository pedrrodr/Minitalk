/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:09:58 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/05/08 11:47:00 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_btoa(int signum)
{
	static int	bit;
	static int	byte;
	static int	bit_values[8];

	if (bit_values[0] == 0)
		init_bit_values(bit_values);
	if (signum == SIGUSR1)
		byte = byte + bit_values[bit];
	bit++;
	if (bit == 8)
	{
		if (byte == 0)
			ft_printf("\n");
		else
			ft_printf("%c", byte);
		bit = 0;
		byte = 0;
	}
}

void	ft_atob(int pid, char c)
{
	static int	bit_values[8];
	int			bit;

	bit = 0;
	if (bit_values[0] == 0)
		init_bit_values(bit_values);
	while (bit < 8)
	{
		if (((c & bit_values[bit]) != 0))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

void	init_bit_values(int *bit_values)
{
	bit_values[0] = 128;
	bit_values[1] = 64;
	bit_values[2] = 32;
	bit_values[3] = 16;
	bit_values[4] = 8;
	bit_values[5] = 4;
	bit_values[6] = 2;
	bit_values[7] = 1;
}
