/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:37:58 by flplace           #+#    #+#             */
/*   Updated: 2021/02/11 13:38:46 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	*ref;
	int		l1;
	int		l2;

	if (!s1 || !s2 || (!s1 && !s2))
		return (NULL);
	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!s3)
		return (NULL);
	ref = s3;
	while (l1-- > 0)
		*s3++ = *s1++;
	while (l2-- > 0)
		*s3++ = *s2++;
	*s3 = '\0';
	return (ref);
}
