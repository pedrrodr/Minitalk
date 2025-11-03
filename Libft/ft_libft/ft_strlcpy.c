/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:28:29 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/23 11:04:39 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)

{
	unsigned int	i;
	size_t			b;

	b = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (b);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	if (i == (size - 1))
		dst[i] = '\0';
	return (b);
}

// int	main(void)

// {
// 	char dst [5];
// 	char src[] = "123456";
// 	ft_strlcpy(dst, src, 5);
// 	printf ("1:%s 2:%s", src, dst);
// 	return(0);
// }
