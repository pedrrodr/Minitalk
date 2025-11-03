/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:00:25 by  pedrrodr         #+#    #+#             */
/*   Updated: 2024/12/19 14:44:44 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	unsigned char	*mptr;
	size_t			total_size;

	total_size = count * size;
	if (total_size == 0)
		return (malloc (0));
	mptr = malloc(total_size);
	if (mptr == NULL)
		return (0);
	ft_memset(mptr, 0, total_size);
	return (mptr);
}
