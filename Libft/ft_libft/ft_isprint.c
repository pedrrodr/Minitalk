/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:21:48 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/19 12:54:43 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)

{
	{
		if (c < 32 || c > 126)
			return (0);
	}
	return (1);
}

/*int	main(void)

{
	int c;
	c = 23;
	if (ft_isprint(c))
	{
		printf("es un char imprimible");
	}
	else
	{
		printf("no es un char imprimible");
	}
	return (0);
}*/
