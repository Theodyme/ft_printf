#include <stdarg.h>
#include <stdio.h>
#include "../libft/ft_atoi.c"

int	ftest(int num_args, ...);

int	main(int ac, char **av)
{
	printf("Soustraction : %d.\n", ftest((ac - 1), ft_atoi(av[1]), ft_atoi(av[2]), ft_atoi(av[3])));
	return 0;
}

int	ftest(int num_args, ...)
{
	int val = 0;
	int i = 0;
	va_list ap;

	va_start(ap, num_args);
	val += va_arg(ap, int);
	printf("ac = %d\nval = %d\n", num_args, val);
	while (i < num_args - 1)
	{
		val -= va_arg(ap, int);
		printf("val = %d\n", val);
		i++;
	}
	va_end(ap);

	return val;
}
