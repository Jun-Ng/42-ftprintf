/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:52:18 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 23:41:38 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (count == 0 || size == 0)
		return (malloc(0));
	if ((count * size) / size != count)
		return (0);
	p = malloc(count * size);
	if (p)
		ft_bzero(p, count * size);
	return (p);
}
