/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:02:43 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/05/07 16:24:08 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <signal.h>
# include <sys/types.h>
# include <stdlib.h>
# include "ft_printf.h"
# include "libft.h"

void	ft_btoa(int signum);
void	ft_atob(int pid, char c);
void	init_bit_values(int *bit_values);
void	confirm_msg(int signum);

#endif