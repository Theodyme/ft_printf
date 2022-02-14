/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:10:05 by flplace           #+#    #+#             */
/*   Updated: 2022/02/14 18:10:32 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...);
int	ft_process_args(va_list *ap, char flag);

int	ft_printf(const char *input, ...)
{
	va_list	ap;
	int		writ;
	int		i;

	i = 0;
	va_start(ap, input);
	writ = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (input[++i] == '%')
			{
				write(1, "%", 1);
				writ++;
			}
			else
				writ += ft_process_args(&ap, input[i]);
		}
		else
		{
			write(1, &input[i], 1);
			writ++;
		}
		i++;
	}
	va_end(ap);
	return (writ);
}

int	ft_process_args(va_list *ap, char flag)
{
	const t_fn	library[9] = {
	{.flag = 'c', .function = &wrapper_c},
	{.flag = 's', .function = &wrapper_s},
	{.flag = 'p', .function = &wrapper_p},
	{.flag = 'd', .function = &wrapper_i},
	{.flag = 'i', .function = &wrapper_i},
	{.flag = 'u', .function = &wrapper_u},
	{.flag = 'x', .function = &wrapper_lx},
	{.flag = 'X', .function = &wrapper_ux},
	};
	int			i;

	i = 0;
	while (flag != library[i].flag && library[i].flag)
		i++;
	if (library[i].flag != '\0')
		return (library[i].function(ap));
	return (0);
}
