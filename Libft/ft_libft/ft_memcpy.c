/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:28:20 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/26 14:25:41 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t length)

{
	size_t		i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (length > 0)
	{
		length--;
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}

/*int	main(void)

{
	char str[20] = "Esto es una prueba";
	char str1[20] = "Pol es la prueba";
	size_t length;
	length = 3;
	printf ("Original: %s\n", str);

	ft_memcpy(str, str1, length);
	printf ("Modificado: %s\n", str);
	return (0);
}*/