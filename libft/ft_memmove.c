/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:08 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 18:10:40 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;
	unsigned int	n;

	d = dst;
	s = src;
	if (d == s || len == 0)
		return (dst);
	if (d > s && d - s < (unsigned int)len)
	{
		n = (unsigned int)len;
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
