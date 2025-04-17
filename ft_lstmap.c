/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:31:18 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/17 15:31:52 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	char	*new_content;
	t_list	*new_node;
	
	new_list = NULL;
	if (lst)
	{
		while (lst)
		{
			new_content = f(lst->content);
			new_node = ft_lstnew(new_content);
			ft_lstadd_back(&new_list, new_node);
			lst = lst->next;
			del(NULL);
		}
		return (new_list);
	}
	else
		return (NULL);
}