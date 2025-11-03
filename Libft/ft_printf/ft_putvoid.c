/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:43:23 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/01/16 16:12:29 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex(uintptr_t n, char *hex_digits);

int	ft_putvoid(void *ptr)
{
	uintptr_t	addr;
	int			counter;
	char		*hex_digits;

	hex_digits = "0123456789abcdef";
	counter = 0;
	addr = (uintptr_t)ptr;
	if (addr == 0)
	{
		write (1, "(nil)", 5);
		counter = counter + 5;
		return (counter);
	}
	write (1, "0x", 2);
	counter = counter + 2;
	counter = counter + print_hex(addr, hex_digits);
	return (counter);
}

static int	print_hex(uintptr_t n, char *hex_digits)
{
	int		counter;
	char	c;

	counter = 0;
	if (n >= 16)
		counter = counter + print_hex(n / 16, hex_digits);
	c = hex_digits[n % 16];
	counter = counter + write(1, &c, 1);
	return (counter);
}
