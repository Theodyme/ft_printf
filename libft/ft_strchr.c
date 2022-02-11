/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:26:30 by flplace           #+#    #+#             */
/*   Updated: 2021/01/22 13:19:36 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (i <= (int)ft_strlen(str) && str[i] != (char)c)
		i++;
	if (i > (int)ft_strlen(str))
		return (NULL);
	return (&str[i]);
}
