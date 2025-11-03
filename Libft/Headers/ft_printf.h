/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:11:21 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/01/15 11:11:27 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);

int		ft_what_format(const char format, va_list *args);

int		ft_numbers(const char format, va_list *args);

int		ft_putchar(int c);

int		ft_putstr(char *str);

int		ft_putvoid(void *ptr);

#endif