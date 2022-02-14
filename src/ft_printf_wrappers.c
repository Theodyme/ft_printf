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

#include "ft_printf.h"
#include <stdio.h>

int	wrapper_c(va_list *ap)
{
	ft_putchar(va_arg(*ap, int));
	return (1);
}

int	wrapper_s(va_list *ap)
{
	return (ft_putstr(va_arg(*ap, char *)));
}

int	wrapper_i(va_list *ap)
{
	return (ft_putnbr_base(va_arg(*ap, int), "0123456789"));
}

int	wrapper_p(va_list *ap)
{
	write(1, "0x", 2);
	return (ft_putptr((size_t)va_arg(*ap, void *), "0123456789abcdef"));
}

int	wrapper_u(va_list *ap)
{
	return (ft_putnbr_uint(va_arg(*ap, int)));
}

int	wrapper_lx(va_list *ap)
{
	return (ft_putnbr_base(va_arg(*ap, int), "0123456789abcdef"));
}

int	wrapper_ux(va_list *ap)
{
	return (ft_putnbr_base(va_arg(*ap, int), "0123456789ABCDEF"));
}
