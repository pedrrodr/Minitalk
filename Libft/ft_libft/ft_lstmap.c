/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  pedrrodr < pedrrodr@student.42malaga.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:15:43 by  pedrrodr         #+#    #+#             */
/*   Updated: 2025/04/14 09:55:07 by  pedrrodr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

//t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
//{
//	t_list *new_lst;
//	t_list *new_node;

//	if (!lst || !f || !del)
//		return(NULL);

//	while (lst)
//	{
//		new_node = malloc(sizeof(t_list));
//		if (!new_node)
//		{
//			ft_lstclear(&new_lst, del);
//			return (NULL);
//		}
//		new_node->content = f(lst->content);
//		new_node->next = NULL;
//		if (!new_lst)
//			new_lst = new_node;
//		else
//		{
//			t_list *temp = new_lst;
//			while (temp->next)
//				temp = temp->next;
//			temp->next = new_node;
//		}
//		lst = lst->next;
//	}
//	return (new_lst);
//}
