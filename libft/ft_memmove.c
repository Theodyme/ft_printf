/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:06:21 by flplace           #+#    #+#             */
/*   Updated: 2021/02/09 15:12:53 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	if (psrc < pdst)
		while (i++ < len)
			*(pdst + len - i) = *(psrc + len - i);
	else
		while (len-- > 0)
			*pdst++ = *psrc++;
	return (dst);
}
