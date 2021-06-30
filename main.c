#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("\n-------------------------------------------------------\n");
	/*{
		int q = ft_printf("Hello!|%4c|PRIVET|%-4c|Hey!!|%c|\n", 'Y', 'P', 54);
		int i = printf("Hello!|%4c|PRIVET|%-4c|Hey!!|%c|\n", 'Y', 'P', 54);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("-------------------------------------------------------\n");
	{
		int q = ft_printf("%*c\n", 3, 'Y');
		int i = printf("%*c\n", 3, 'Y');
		printf("\nq = %d, i = %d", q, i);
	} 
	{
		int q = ft_printf("|%1.2s|\n", "abc");
		int i = printf("|%1.2s|\n", "abc");
		printf("\nq = %d, i = %d", q, i);
	}*/
	{
		int q = ft_printf("|%12.5d|\n", 0);
		int i = printf("|%12.5d|\n", 0);
		printf("\nq = %d, i = %d", q, i);
	}
//	printf("\n\nabc%%");
	return (0);
}