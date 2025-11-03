/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:41:26 by  pedrrodr         #+#    #+#             */
/*   Updated: 2024/12/23 11:04:08 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_length;
	char	*substr;

	if (s == NULL)
		return (NULL);
	s_length = ft_strlen (s);
	if (start >= (unsigned)ft_strlen(s))
		return (ft_strdup(""));
	if (len > s_length - start)
		len = s_length - start;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
