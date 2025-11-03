/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:28:26 by  pedrrodr         #+#    #+#             */
/*   Updated: 2024/12/24 11:38:53 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int nbr);
static char	*handle_int_min(void);

char	*ft_itoa(int n)
{
	int			len;
	char		*result;
	int			i;

	if (n == -2147483648)
		return (handle_int_min());
	len = int_len(n);
	result = malloc((len) + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	i = len - 1;
	while (n > 9)
	{
		result[i--] = (n % 10) + '0';
		n = n / 10;
	}
	result[i] = (n % 10) + '0';
	return (result);
}

static int	int_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	if (nbr == 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static char	*handle_int_min(void)
{
	char	*result;

	result = malloc(12);
	if (!result)
		return (NULL);
	ft_strlcpy(result, "-2147483648", 12);
	return (result);
}
