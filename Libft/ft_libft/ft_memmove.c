/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:52:34 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/24 11:52:20 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*src1;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest1 = dest;
	src1 = src;
	if (dest < src)
	{
		while (n--)
			*dest1++ = *src1++;
	}
	else if (dest > src)
	{
		dest1 = dest1 + (n - 1);
		src1 = src1 + (n - 1);
		while (n--)
			*dest1-- = *src1--;
	}
	return (dest);
	if (!dest && !src)
		return (dest);
}

// int	main()

// {
// 	char str1[6] = "dcdx";
// 	char str[6] = "abcd";

// 	size_t n;
// 	n = 2;

// 	printf ("Src: %s\n", str1);

// 	ft_memmove(str, str1, n);
// 	printf ("Dest: %s\n", str);

// 	return 0;
// }
