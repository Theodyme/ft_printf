/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:12:59 by flplace           #+#    #+#             */
/*   Updated: 2021/12/06 17:13:05 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_base(char *base, int baselen)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (baselen == 0 || baselen == 1)
		return (0);
	while (base[i])
	{
		if (base[i] < 32 || base[i] > 126)
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				baselen;

	n = 0;
	baselen = ft_strlen(base);
	if (ft_check_base(base, baselen))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		if (n >= (unsigned int)baselen)
			ft_putnbr_base(n / baselen, base);
		ft_putchar(base[(n % baselen)]);
	}
}
