/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:37:57 by  pedrrodr         #+#    #+#             */
/*   Updated: 2024/12/23 11:04:54 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	char	*start;

	s1 = malloc(ft_strlen(s) + 1);
	if (s1 == NULL)
		return (NULL);
	start = s1;
	while (*s != '\0')
	{
		*s1 = *s;
		s++;
		s1++;
	}
	*s1 = '\0';
	return (start);
}

// int	main(void)

// {
// 	char *s = "hola";
// 	char *result = ft_strdup(s);
// 	printf("%s", result);
// }