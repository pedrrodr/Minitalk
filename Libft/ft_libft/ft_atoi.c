/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:44:49 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/24 11:09:31 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	variables(int *i, int *sign, int *result);

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	variables(&i, &sign, &result);
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (nptr[i - 1] == '-' && nptr[i] == '+')
		return (0);
	if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	result = (result * sign);
	return (result);
}

void	variables(int *i, int *sign, int *result)
{
	*i = 0;
	*result = 0;
	*sign = 1;
}
