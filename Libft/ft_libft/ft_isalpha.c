/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:08:03 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/19 12:55:45 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)

{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		return (0);
	}
	return (1);
}

/*int	main(void)

{
	int c;
	c = -50;

	if (ft_isalpha(c))
	{
		printf("es un char alpha");
	}
	else
	{
		printf("no es un char alpha");
	}
	return (0);
}*/