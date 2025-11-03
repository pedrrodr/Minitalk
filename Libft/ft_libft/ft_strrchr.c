/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:05:52 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/26 10:20:50 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	result = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			result = (char *)&s[i];
		i++;
	}
	if (s[i] == (char) c)
		result = (char *)&s[i];
	return (result);
}

// int	main()

// {
// 	int i;
// 	i = 0;
// 	char s1[10] = "abc";
// 	ft_strrchr(s1, 65);
// 	while (s1[i] != '\0')
// 	{
// 		i++;
// 		if (s1[i] == 65)
// 		{
// 			write (1, &s1[i], 1);
// 			return (0);
// 		}
// 	}
// 	write (1, "NULL", 4);
// 	return (0);
// }