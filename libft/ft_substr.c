/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:41 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 16:02:13 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s0;

	if (!s)
		return (0);
	if (len == 0 || (unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	s0 = malloc(len + 1);
	if (!s0)
		return (0);
	ft_strlcpy(s0, s + start, len + 1);
	return (s0);
}
