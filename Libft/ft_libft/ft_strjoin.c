/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:42:37 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/03/11 10:25:17 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t		s1_len;
	size_t		s2_len;
	size_t		i;
	char		*mem;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	mem = malloc(s1_len + s2_len + 1);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	while (*s2 != '\0')
	{
		mem[i] = *s2;
		i++;
		s2++;
	}
	mem[i] = '\0';
	return (mem);
}
