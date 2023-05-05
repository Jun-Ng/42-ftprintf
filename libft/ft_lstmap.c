/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:55:05 by junng             #+#    #+#             */
/*   Updated: 2023/05/03 18:59:22 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*i;

	if (!lst || !f || !del)
		return (0);
	head = ft_lstnew((*f)(lst->content));
	if (!head)
		ft_lstclear(&head, del);
	i = head;
	lst = lst->next;
	while (lst && i)
	{
		ft_lstadd_back(&head, ft_lstnew((*f)(lst->content)));
		if (!i->next)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		i = i->next;
		lst = lst->next;
	}
	return (head);
}
