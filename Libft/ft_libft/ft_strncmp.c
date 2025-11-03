/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:19:57 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/21 10:59:27 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)

// {
// 	char *str1 = "abc";
// 	char *str2 = "abc";
// 	char *str3 = "aax";
// 	unsigned int n = 3;

// 	int	result1 = ft_strncmp(str1, str2, n);
// 	printf ("Comparo \"%s\" y \"%s\": %d\n", str1, str2, result1);

// 	int	result2 = ft_strncmp(str1, str3, n);
// 	printf("Comparo \"%s\" y \"%s\": %d\n", str1, str3, result2);

// 	return (0);
// }
