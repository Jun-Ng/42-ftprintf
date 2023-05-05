/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:30 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 18:11:15 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		s_len;

	if (!dst)
		return (0);
	d = dst;
	s = src;
	s_len = ft_strlen(src);
	if (dstsize > s_len + 1)
		ft_memcpy(d, s, s_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(d, s, dstsize - 1);
		d[dstsize - 1] = '\0';
	}
	return (s_len);
}
