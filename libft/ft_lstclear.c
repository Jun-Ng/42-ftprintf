/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:54:27 by junng             #+#    #+#             */
/*   Updated: 2023/04/29 00:23:28 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
