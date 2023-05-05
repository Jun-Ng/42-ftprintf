/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:33 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 18:11:26 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	int		slen;
	int		i;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	c = malloc(slen + 1);
	if (!c)
		return (0);
	i = -1;
	if (f && *s)
	{
		while (++i < slen)
			c[i] = (*f)(i, s[i]);
		c[slen] = 0;
	}
	else
		ft_strlcpy(c, s, slen + 1);
	return (c);
}
