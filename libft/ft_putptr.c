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

int	ft_putptr(size_t hex, char *base)
{
	int				cnt;

	cnt = 0;
	if (hex >= 16)
		cnt += ft_putptr(hex / 16, base);
	ft_putchar(base[(hex % 16)]);
	cnt++;
	return (cnt);
}
