/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:55:34 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 16:02:13 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s1_p;
	const char	*s2_p;

	if (!s1 || !s2 || !n)
		return (0);
	s1_p = s1;
	s2_p = s2;
	while (n--)
	{
		if (*s1_p != *s2_p)
			return (*(unsigned char *)s1_p - *(unsigned char *)s2_p);
		s1_p++;
		s2_p++;
	}
	return (0);
}
