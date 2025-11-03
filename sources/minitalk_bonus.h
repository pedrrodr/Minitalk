/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:23:45 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/05/07 16:30:45 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H
# define _DEFAULT_SOURCE
# define _BSD_SOURCE
# define _XOPEN_SOURCE 700
# define _POSIX_C_SOURCE 200809L
# include <unistd.h>
# include <signal.h>
# include <sys/types.h>
# include <stdlib.h>
# include "ft_printf.h"
# include "libft.h"

void	ft_btoa(int signum, siginfo_t *info, void *context);
void	ft_atob(int pid, char c);
void	init_bit_values(int *bit_values);
void	confirm_msg(int signum);

#endif