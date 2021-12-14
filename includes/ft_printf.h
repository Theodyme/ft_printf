#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include "../libft/libft.h"

int	ft_check_base(char *base, int baselen);
void	ft_putchar(char b);
void	ft_putnbr_base(int nbr, char *base);
