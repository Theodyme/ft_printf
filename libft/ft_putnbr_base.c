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

int	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				cnt;
	int				baselen;

	cnt = 0;
	n = 0;
	baselen = ft_strlen(base);
	if (ft_checkbase(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			cnt++;
			n = -nbr;
		}
		else
			n = nbr;
		if (n >= (unsigned int)baselen)
			cnt += ft_putnbr_base(n / baselen, base);
		ft_putchar(base[(n % baselen)]);
		cnt++;
	}
	return (cnt);
}
