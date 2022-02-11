/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:17:06 by flplace           #+#    #+#             */
/*   Updated: 2021/02/24 17:17:13 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*idx;

	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	idx = ft_lstlast(*alst);
	idx->next = new;
}
