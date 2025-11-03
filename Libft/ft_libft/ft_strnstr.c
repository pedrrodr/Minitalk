/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:48:04 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/21 10:55:07 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)

{
	size_t		i;
	size_t		found;

	i = 0;
	found = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + found] == little[found]
			&& big[i + found] && i + found < len)
		{
			found++;
			if (little[found] == 0)
				return ((char *) big + i);
		}
		i++;
		found = 0;
	}
	return (0);
}

/*int	main(void)

{
	char cofre[] = "Hola me has encontrado";
	char tesoro[] = "me has encontrado";
	size_t len = 4;
	char result = ft_strnstr(cofre, tesoro, len);

	printf("%s\n", result);
	return (0);
}*/
