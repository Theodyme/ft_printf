#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"
# include <unistd.h>

typedef int (*fn_type)(va_list *ap);

typedef struct s_fn
{
	char	flag;
	fn_type	function;
}		s_fn;

int     ft_printf(const char *input, ...);
int     ft_process_args(va_list *ap, char flag);
int	wrapper_c(va_list *ap);
int	wrapper_i(va_list *ap);
int	wrapper_lx(va_list *ap);
int	wrapper_p(va_list *ap);
int	wrapper_s(va_list *ap);
int	wrapper_u(va_list *ap);
int	wrapper_ux(va_list *ap);

#endif
