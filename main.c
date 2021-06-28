#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int q = ft_printf("Hello!4%c", 'Y');
	printf("\nq = %d", q);
	printf("\n\nabc%%");
	return (0);
}