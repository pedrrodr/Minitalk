/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:37:37 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/21 10:58:01 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)

{
	{
		if (c < 48 || c > 57)
			return (0);
	}
	return (1);
}

/*int	main(void)

{
	int c;
	c = 28;

	if (ft_isdigit(c))
	{
		printf("es un char digit");
	}
	else
	{
		printf("no es un char digit");
	}
	return (0);
}*/
