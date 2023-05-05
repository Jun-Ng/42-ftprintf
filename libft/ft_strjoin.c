/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:01:27 by junng             #+#    #+#             */
/*   Updated: 2023/04/28 16:02:13 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s1_len;
	size_t	s2_len;
	size_t	s3_len;

	s3 = 0;
	if (!s1 && !s2)
		return (0);
	if (!s1 || !*s1)
		return (ft_strdup(s2));
	if (!s2 || !*s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3_len = s1_len + s2_len + 1;
	s3 = malloc(s3_len);
	if (!s3)
		return (0);
	ft_strlcpy(s3, s1, s3_len);
	ft_strlcpy(s3 + s1_len, s2, s3_len);
	return (s3);
}
