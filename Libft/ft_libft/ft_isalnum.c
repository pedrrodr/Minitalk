/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:02:56 by pedrrodr          #+#    #+#             */
/*   Updated: 2024/12/19 12:55:37 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)

{
	{
		if (((c < 65 || c > 90) && (c < 97 || c > 122)
				&& (c < 48 || c > 57)))
			return (0);
	}
	return (1);
}

/*int	main(void)

{
	int c;
	c = 50;

	if (ft_isalnum(c))
	{
		printf("es un char alphanum");
	}
	else
	{
		printf("no es un char alphanum");
	}
	return (0);
}*/
