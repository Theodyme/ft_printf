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

int	ft_putnbr_uint(unsigned int nbr)
{
	int				cnt;

	cnt = 0;
	if (nbr >= 10)
		cnt += ft_putnbr_base(nbr / 10);
	ft_putchar(nbr % 10);
	cnt++;
	return (cnt);
}
