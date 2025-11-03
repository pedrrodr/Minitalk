/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:18:48 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/21 10:58:18 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*a1 != *a2)
			return (*a1 - *a2);
		a1++;
		a2++;
		n--;
	}
	return (0);
}

// int	main(void)

// {
// 	char s1[4] = "abc";
// 	char s2[4] = "xbc";
// 	size_t n = 2;
// 	int result = ft_memcmp(s1, s2, n);
// printf("Resultado:%d\n", result);
// 	return (0);
// }
