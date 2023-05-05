/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:28 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 16:02:13 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			d_len;
	size_t			s_len;
	unsigned int	n;

	if (!dst || !src)
		return (0);
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize > d_len)
	{
		n = d_len;
		while (*src && dstsize && dstsize-- > d_len + 1)
			dst[n++] = *src++;
		dst[n] = 0;
		return (d_len + s_len);
	}
	return (dstsize + s_len);
}
