/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:34:32 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/19 17:52:47 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, size_t length)

{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = dest;
	i = 0;
	while (length > 0)
	{
		length--;
		ptr[i] = val;
		i++;
	}
	return (dest);
}

// int	main (void)

// {
// 	char	str[20] = "Esto es una prueba";

// 	int	val;
// 	val = '$';

// 	size_t	length;
// 	length = 5;

// 	printf ("Original: %s\n", str);

// 	ft_memset(str, val, length);	
// 	printf ("Modificado: %s\n", str);

// 	return (0);
// }
