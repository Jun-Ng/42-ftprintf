/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:36 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 17:44:57 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		h;
	size_t		n;

	if (!*needle)
		return ((char *)haystack);
	if (!haystack || !*haystack || !needle || len == 0)
		return (0);
	h = 0;
	while (len && haystack[h])
	{
		n = 0;
		while (n < len && haystack[h + n] == needle[n])
			n++;
		if (n == ft_strlen(needle))
			return ((char *)(haystack + h));
		h++;
		len--;
	}
	return (0);
}
