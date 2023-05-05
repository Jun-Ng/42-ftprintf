/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:38 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 17:45:03 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	int		l;

	if (!s)
		return (0);
	l = ft_strlen(s) + 1;
	r = 0;
	while (--l > -1)
	{
		if (s[l] == (char)c)
		{
			r = (char *)s + l;
			break ;
		}
	}
	return (r);
}
