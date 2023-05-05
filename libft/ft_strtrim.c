/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:39 by junng             #+#    #+#             */
/*   Updated: 2023/05/02 16:18:00 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Front & Back

	s1
	set

	while (s1[s] in set)
		s++;
	
	while (s1[l] in set)
		l--;

	?
*/

static int	in_set(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		x;
	int		y;
	int		z;

	if (!s1 || !*s1 || !set || !*set)
		return (ft_strdup(s1));
	x = 0;
	y = ft_strlen(s1) - 1;
	while (x < y && in_set(s1[x], set))
		x++;
	while (y && in_set(s1[y], set))
		y--;
	if (x <= y)
		s = malloc(y - x + 2);
	else
		s = malloc(1);
	if (!s)
		return (0);
	z = 0;
	while (y - x > -1)
		s[z++] = s1[x++];
	s[z] = 0;
	return (s);
}
