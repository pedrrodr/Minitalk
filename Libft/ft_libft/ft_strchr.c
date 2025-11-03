/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:08:05 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/30 10:23:43 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)

{
	int	i;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
	{
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
// // #include <unistd.h>
//     int main ()

// // {
// // 	int i;
// // 	i = 0;
// // 	char s1 [10] = "abc";
// // 	ft_strchr(s1, 65);
// // 	while (s1[i] != '\0')
// // 	{
// // 		i++;
// // 	if (s1[i] == 65)
// // 		{
// // 			write (1, &s1[i], 1);
// // 			return (0);
// // 		}
// // 	}
// // 	write (1, "NULL", 4);
// // 	return (0);
// // }
