/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:30:26 by  pedrrodr         #+#    #+#             */
/*   Updated: 2024/12/21 10:31:51 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mem;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (j >= i && ft_strchr(set, s1[j]))
	{
		j--;
	}
	len = j - i + 1;
	mem = malloc(len + 1);
	if (!mem)
		return (NULL);
	ft_memcpy(mem, s1 + i, j - i + 1);
	mem[j - i + 1] = '\0';
	return (mem);
}
