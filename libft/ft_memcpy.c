/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:11:39 by flplace           #+#    #+#             */
/*   Updated: 2021/02/03 16:11:42 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pdst;

	if (!dst && !src)
		return (NULL);
	pdst = (char *)dst;
	while (n-- > 0)
		*pdst++ = *(const char *)src++;
	return (dst);
}
