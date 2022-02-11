/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:23:42 by flplace           #+#    #+#             */
/*   Updated: 2021/02/24 17:25:54 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	char			*fs;
	unsigned int	i;

	i = -1;
	if (!s)
		return (NULL);
	size = ft_strlen((char *)s);
	fs = (char *)malloc(sizeof(char) * (size + 1));
	if (!fs)
		return (NULL);
	while (++i < (unsigned int)size)
		fs[i] = f(i, s[i]);
	fs[i] = '\0';
	return (fs);
}
