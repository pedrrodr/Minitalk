/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:47:41 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/01/15 16:26:20 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					print_number(int n);
unsigned int		print_unsigned(unsigned int n);
static unsigned int	print_hex(unsigned int n, const char format);

int	ft_numbers(const char format, va_list *args)
{
	int	n;
	int	counter;

	counter = 0;
	if (format == 'd' || format == 'i')
	{
		n = va_arg(*args, int);
		counter = counter + print_number(n);
	}
	else if (format == 'u')
	{
		n = (unsigned int)va_arg(*args, unsigned int);
		counter = counter + print_unsigned(n);
	}
	else if (format == 'x' || format == 'X')
	{
		n = (unsigned int)va_arg(*args, unsigned int);
		counter = counter + print_hex(n, format);
	}
	return (counter);
}

int	print_number(int n)
{
	int		counter;
	char	c;

	counter = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		counter = counter + write(1, "-", 1);
		n = -n;
	}
	if (n <= 9)
	{
		c = n + '0';
		counter = counter + write (1, &c, 1);
	}
	if (n > 9)
	{
		counter = counter + print_number(n / 10);
		c = (n % 10) + '0';
		counter = counter + write(1, &c, 1);
	}
	return (counter);
}

unsigned int	print_unsigned(unsigned int n)
{
	int		counter;
	char	c;

	counter = 0;
	if (n > 9)
	{
		counter = counter + print_unsigned(n / 10);
		c = (n % 10) + '0';
		write(1, &c, 1);
		counter++;
	}
	if (n <= 9)
	{
		c = n + '0';
		write (1, &c, 1);
		counter++;
	}
	return (counter);
}

static unsigned int	print_hex(unsigned int n, const char format)
{
	char	*hex_digits;
	char	c;
	int		counter;

	counter = 0;
	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		counter = counter + print_hex(n / 16, format);
	c = hex_digits[n % 16];
	counter = counter + write(1, &c, 1);
	return (counter);
}
