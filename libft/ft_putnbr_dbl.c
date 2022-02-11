/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:26:28 by flplace           #+#    #+#             */
/*   Updated: 2021/12/06 17:26:30 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_putnbr_dbl(double nbr)
{
	double	n;
	int				cnt;

	cnt = 0;
	n = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		cnt++;
		n = -nbr;
	}
	else
		n = nbr;
	if (n >= 10.0)
		cnt += ft_putnbr_dbl(n / 10.0);
	ft_putchar(n % 10.0);
	cnt++;
	if (n > 0.0)
		cnt += ft_putnbr_dbl(n * 10.0);
	return (cnt);
}
