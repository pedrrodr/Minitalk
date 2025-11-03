/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:31:00 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/04/14 09:50:52 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *box;

	box = (t_list *)malloc(sizeof(t_list));
	if(!box)
	return(NULL);
	box->content = content;
	box->next = NULL;
	return(box);
}