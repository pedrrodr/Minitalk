/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_what_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 09:51:34 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/01/15 16:04:48 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_what_format(const char format, va_list *args)
{
	int	counter;

	counter = 0;
	if (format == 'c')
		counter = counter + ft_putchar(va_arg (*args, int));
	else if (format == 's')
		counter = counter + ft_putstr(va_arg (*args, char *));
	else if (format == 'p')
		counter = counter + ft_putvoid(va_arg (*args, void *));
	else if (format == 'd')
		counter = counter + ft_numbers(format, args);
	else if (format == 'i')
		counter = counter + ft_numbers(format, args);
	else if (format == 'u')
		counter = counter + ft_numbers(format, args);
	else if (format == 'x')
		counter = counter + ft_numbers(format, args);
	else if (format == 'X')
		counter = counter + ft_numbers(format, args);
	else if (format == '%')
		counter = counter + write (1, "%", 1);
	return (counter);
}
