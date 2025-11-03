/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:03:16 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/21 11:36:57 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t length)

{
	char	*ptr;

	ptr = (char *)dest;
	while (length > 0)
	{
		length--;
		*ptr = '\0';
		ptr++;
	}
}

/*int	main()

{
	char str[20] = "Esto es una prueba";

	printf("Original: %s\n", str);

	ft_bzero(str, 5);

	printf("Modificado:");

	int i;
	i = 0;

	while (i < 20)
	{
		if (str[i] == '\0')
		{
			printf(" ");
		}
		else
		{
		printf("%c", str[i]);
		}
	i++;
	}
	return (0);
}*/
