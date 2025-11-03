/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:15:59 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/21 10:20:58 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		src_len;
	size_t		dst_len;

	src_len = ft_strlen(((char *)src));
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		dst_len = dstsize;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}

// int	main(void)

// {
// 	char dst[8] = "123456";
// 	const char src[10] = "789";

// 	ft_strlcat(dst, src, 8);
// 	printf("1: %s 2: %s", src, dst);
// 	return(0);
// }
