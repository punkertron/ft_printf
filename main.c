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
	/*
	{
		int q = ft_printf("|%1.5d|\n", 123);
		int i = printf("|%1.5d|\n", 123);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		int q = ft_printf("|%-12.3u, u = %u|\n", 123456, 34);
		int i = printf("|%-12.3u, u = %u|\n", 123456, 34);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*	{
		int q = ft_printf("|%12.9x|\n", 25031);
		int i = printf("|%12.9x|\n", 25031);
		printf("\nq = %d, i = %d", q, i);
	}*/
/*
	{
		char *ptr = "NULLlllllllllllllllllllllllllllllllllllllllllllllll";
		int q = ft_printf("|%50.0p|\n", ptr);
		int i = printf("|%p|\n", ptr);
		printf("\nq = %d, i = %d", q, i);
	}*/
	/*
	{
		int q = ft_printf("|%*c|\n", -3, 'Y');
		int i = printf("|%*c|\n", -3, 'Y');
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		int q = ft_printf("|*%c%*c|\n", '0', 10, '1');
		int i = printf("|*%c%*c|\n", '0', 10, '1');
		printf("\nq = %d, i = %d", q, i);
	}
	*/
	/*
	"%-c%-c%c*", 1, '0', 0
	{
		int q = ft_printf("|%*c%c*|\n", -10, '0', '1');
		int i = printf("|%*c%c*|\n", -10, '0', '1');
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		int q = ft_printf("|%-c%-c%c*|\n", 45, '0', 100);
		int i = printf("|%-c%-c%c*|\n", 45, '0', 100);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		int q = ft_printf("|%-8.4s|\n", "123456");
		int i = printf("|%-8.4s|\n", "123456");
		printf("\nq = %d, i = %d", q, i);
	}*/
	/*{
		int q = ft_printf("|%.d|\n", 0);
		int i = printf("|%.d|\n", 0);
		printf("\nq = %d, i = %d", q, i);
	}*/
	/*
	{
		int q = ft_printf("|%10.0d|\n", 13);
		int i = printf("|%10.0d|\n", 13);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		char *str = NULL;
		int q = ft_printf("|%.p|\n", -1);
		(void) q;
		int i = printf("|%.p|\n", -1);
		printf("\nq = %d, i = %d", q, i);
	}
	*/

	{
		int i = ft_printf("| 0*%-0*.10d*0 0*%-0*.0d*0 |\n", 21, 1021, 21, -1011);
		int q = printf("| 0*%-0*.10d*0 0*%-0*.0d*0 |\n", 21, 1021, 21, -1011);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, -1011);
		int q = printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, -1011);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------33\n");
	{
		int i = ft_printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, 1011);
		int q = printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, 1011);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%*d|\n", 21, 21);
		int q = printf("|%*d|\n", 21, 21);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%*d|\n", 21, -21);
		int q = printf("|%*d|\n", 21, -21);
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%-*d|\n", 21, 21);
		int q = printf("|%-*d|\n", 21, 21);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%10.2d|\n", -2147483647);
		int q = printf("|%10.2d|\n", -2147483647);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %-3.2d %10.42d |\n", 1, -1);
		int q = printf("| %-3.2d %10.42d |\n", 1, -1);
		printf("\nq = %d, i = %d", q, i);
	}
	
ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("| 0*%0-*.*d*0 0*%0*.*d*0 |\n", 6, 2, 102, 10, 21, -423);
		int q = printf("| 0*%0-*.*d*0 0*%0*.*d*0 |\n", 6, 2, 102, 10, 21, -423);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("| %*.*d*0 |\n", 21, 7, -123);
		int q = printf("| %0*.*d*0 |\n", 21, 7, -123);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%0*d|\n", 7, -1011);
		int q = printf("|%0*d|\n", 7, -1011);
		printf("\nq = %d, i = %d", q, i);
	}
/*
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, -1011);
		int q = printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, -1011);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("|%4s|\n", "123");
		int q = printf("|%4s|\n", "123");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| %4s %4s |\n", "123", "4567");
		int q = printf("| %4s %4s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| |%-4s| |%4s| |\n", "123", "4567");
		int q = printf("| |%-4s| |%4s| |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %4s %-4s |\n", "123", "4567");
		int q = printf("| %4s %-4s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}



	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %-4s %-4s |\n", "123", "4567");
		int q = printf("| %-4s %-4s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %-4s %-4s |\n", "123", "4567");
		int q = printf("| %-4s %-4s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %*s %*s |\n", 1, "123", 10, "4567");
		int q = printf("| %*s %*s |\n", 1, "123", 10, "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| *%s %*s |\n", "123", 10, "4567");
		int q = printf("| *%s %*s |\n", "123", 10, "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| %*s %s |\n", 10, "123", "4567");
		int q = printf("| %*s %s |\n", 10, "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("|%4.3s %-4.3s |\n", "123", "4567");
		int q = printf("|%4.3s %-4.3s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| %4.2s %-4.2s |\n", "123", "4567");
		int q = printf("| %4.2s %-4.2s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("|%.*s|", -2, NULL);
		ft_printf("\n%d", i);
	}
	{
		int i = ft_printf("%p", 9223372036854775807);
		printf("\n%d", i);
	}
	*/
/*
	{
		int i = ft_printf("|%c*|\n",  0);
		int q = printf("|%c*|\n", 0);
		printf("\ni = %d, q = %d\n\n", i, q);
	}
	{
		int i = ft_printf("|%c|\n",  56);
		int q = printf("|%c|\n", 56);
		printf("\ni = %d, q = %d", i, q);
	}
	*/
/*
	{
		int i = ft_printf("| -%*c* -%-*c* |\n", -2, 0, 2, 0);
		int q = printf("| -%*c* -%-*c* |\n", -2, 0, 2, 0);
		printf("\ni = %d, q = %d", i, q);
	}

	{
		int i = ft_printf("|%-c%-c%c*|\n", 1, '0', 0);
		int q = printf("|%-c%-c%c*|\n", 1, '0', 0);
		printf("\ni = %d, q = %d", i, q);
	}
	*/
	/*
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| -%*c* -%-*c* |\n", -1, 0, 1, 0);
		int q = printf("| -%*c* -%-*c* |\n", -1, 0, 1, 0);
		printf("\ni = %d, q = %d", i, q);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| -%-*c* -%-*c* |\n", 2, 0, -2, 0);
		int q = printf("| -%-*c* -%-*c* |\n", 2, 0, -2, 0);
		printf("\ni = %d, q = %d", i, q);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| -%-2c* -%2c* |\n", 0, 0);
		int q = printf("| -%-2c* -%2c* |\n", 0, 0);
		printf("\ni = %d, q = %d", i, q);
	}
*//*
	{
		int i = ft_printf("|%0*.*d*0 |\n", 21, 10, -101);
		int q = printf("|%0*.*d*0 |\n", 21, 10, -101);
		printf("\ni = %d, q = %d", i, q);
	}
	*/
/*
	{
		int i = ft_printf("|%-0.2c|\n", 'Y');
		int q = printf("|%-0.2c|\n", 'Y');
		printf("\ni = %d, q = %d", i, q);
	}
*/
//	printf("\n\nabc%%");  
	return (0);
}
