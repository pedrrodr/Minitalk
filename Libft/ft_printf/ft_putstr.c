/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:34:46 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/01/27 13:02:49 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		counter = counter + 6;
		return (counter);
	}
	while (str[i] != '\0')
	{
		counter = counter + write(1, &str[i], 1);
		i++;
	}
	return (counter);
}
