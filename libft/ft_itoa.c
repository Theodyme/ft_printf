/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:21:06 by flplace           #+#    #+#             */
/*   Updated: 2021/03/03 13:57:40 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_checknegative(int *n, int *flag, int *size)
{
	if (*n < 0)
	{
		*n *= -1;
		*flag = 1;
		*size += 1;
	}
}

int	ft_intlen(int n)
{
	int	ct;

	ct = 0;
	while (n /= 10)
	{
		ct++;
	}
	ct++;
	return (ct);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		flag;

	size = 1;
	flag = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_checknegative(&n, &flag, &size);
	size = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size--] = '\0';
	while (size >= 0)
	{
		str[size--] = n % 10 + 48;
		n = n / 10;
	}
	if (flag)
		str[0] = '-';
	return (str);
}
