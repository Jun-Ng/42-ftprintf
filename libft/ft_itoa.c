/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:53:58 by junng             #+#    #+#             */
/*   Updated: 2023/04/29 00:20:32 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int i)
{
	if (i < 0)
		return (i * -1);
	return (i);
}

static int	i_len(int i)
{
	int	n;

	n = 1;
	while (i / 10)
	{
		i /= 10;
		n++;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		len;
	int		neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	len = i_len(n);
	a = malloc(len + neg + 1);
	if (!a)
		return (0);
	len = len + neg - 1;
	a[len + 1] = 0;
	while (len > -1)
	{
		a[len--] = ft_abs((n % 10)) + 48;
		n /= 10;
	}
	if (neg)
		a[0] = '-';
	return (a);
}
