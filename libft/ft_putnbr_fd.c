/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:05:42 by flplace           #+#    #+#             */
/*   Updated: 2021/02/11 17:05:45 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		n = -nbr;
	}
	else
		n = nbr;
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10 + 48), fd);
}
