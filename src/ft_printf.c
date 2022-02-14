
#include <stdio.h>
#include "ft_printf.h"


int	ft_printf(const char *input, ...);
int	ft_process_args(va_list *ap, char flag);

int	main(int ac, char **av)
{
	(void)ac;
	char *i;

	i = "coucou";
	ft_printf("ft_printf : %p\n", i);
	printf("vs printf : %p\n", i);
//	ft_printf(av[1], i);


	return (0);
}




int	ft_printf(const char *input, ...)
{
	va_list	ap;
	int	writ;
	int	i;

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
	printf("\nnbr de char ecrit: %d\n", writ);
	return (writ);
}





int	ft_process_args(va_list *ap, char flag)
{
	const s_fn	library[9] = {
		{ .flag = 'c', .function = &wrapper_c },
		{ .flag = 's', .function = &wrapper_s },
		{ .flag = 'p', .function = &wrapper_p }, /* CASTER EN SIZE_T */
                { .flag = 'd', .function = &wrapper_i },
                { .flag = 'i', .function = &wrapper_i },
                { .flag = 'u', .function = &wrapper_u },
                { .flag = 'x', .function = &wrapper_lx },
                { .flag = 'X', .function = &wrapper_ux },
	};
	int i;

	i = 0;
	while (flag != library[i].flag && library[i].flag)
		i++;
	if (library[i].flag != '\0')
		return (library[i].function(ap));
	return (0);
}

