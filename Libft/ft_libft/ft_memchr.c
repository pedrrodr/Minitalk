/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:19:27 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/19 14:25:52 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	a;

	a = (unsigned char) c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == a)
			return ((void *) &ptr[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)

// {
// 	char s[10] = "hcola";
// 	size_t n;
// 	char c;
// 	n = 3;
// 	c = 'c';
// 	ft_memchr(s, c, n);
// 	write (1, &ft_memchr, 5);
// 		return (0);
// }