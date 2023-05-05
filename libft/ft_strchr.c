/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:22 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 16:02:13 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*r;

	r = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == (char)c)
		{
			r = (char *)s;
			break ;
		}
		s++;
	}
	if (!c)
		r = (char *)s;
	return (r);
}
