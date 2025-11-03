/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:14:45 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/19 12:55:52 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)

{
	{
		if (c < 0 || c > 127)
			return (0);
	}
	return (1);
}

/*int	main(void)

{
	int c;
	c = 300;

	if (ft_isascii(c))
	{
		printf("no es un char ascii");
	}
	else
	{
		printf("es un char ascii");
	}
	return (0);
}*/
