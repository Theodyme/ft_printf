/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:12:33 by flplace           #+#    #+#             */
/*   Updated: 2021/03/02 12:55:49 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_checkbase(char *base);
int				ft_putnbr_uint(unsigned int nbr);
int				ft_putptr(size_t hex, char *base);
int				ft_putstr(char *s);
int				ft_putnbr_base(int nbr, char *base);
void			ft_putchar(char c);
size_t			ft_strlen(const char *str);

#endif
