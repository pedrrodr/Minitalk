/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:30:30 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/04/14 09:22:09 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	int		i;

	if (!format)
		return (0);
	i = 0;
	counter = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			counter = counter + ft_what_format(format[i], &args);
		}
		else
			counter = counter + write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (counter);
}
